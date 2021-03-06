////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using System;
using Microsoft.SPOT;
using Microsoft.SPOT.Input;
using Microsoft.SPOT.Hardware;
using Microsoft.SPOT.Presentation;

namespace ClockSample
{
    /// <summary>
    /// Gets the pins for handling button input, using the hardware provider.
    /// </summary>
    public sealed class GPIOButtonInputProvider
    {
        public readonly Dispatcher Dispatcher;

        private ButtonPad[] buttons;
        private DispatcherOperationCallback callback;
        private InputProviderSite site;
        private PresentationSource source;

        /// <summary>
        /// Maps GPIOs to Buttons processable by Microsoft.SPOT.Presentation.
        /// </summary>
        /// <param name="source"></param>
        public GPIOButtonInputProvider(PresentationSource source)
        {
            // Set the input source.
            this.source = source;
            
            // Register the object as an input source with the input manager and 
            // get back an InputProviderSite object.  The InputProviderSite 
            // object forwards the input report to the input manager.  The input 
            // manager then places the input in the staging area.
            site = InputManager.CurrentInputManager.RegisterInputProvider(this);

            // Create a delegate that refers to the InputProviderSite object's 
            // ReportInput method.
            callback = new DispatcherOperationCallback(delegate(object report)
                    {
                        InputReportArgs args = (InputReportArgs)report;
                        return site.ReportInput(args.Device, args.Report);
                    });
            Dispatcher = Dispatcher.CurrentDispatcher;

            // Create a hardware provider.
            HardwareProvider hwProvider = new HardwareProvider();

            // Create the pins that are needed for the buttons.  Default their 
            // values for the emulator.
            Cpu.Pin pinLeft = Cpu.Pin.GPIO_Pin0;
            Cpu.Pin pinRight = Cpu.Pin.GPIO_Pin1;
            Cpu.Pin pinUp = Cpu.Pin.GPIO_Pin2;
            Cpu.Pin pinSelect = Cpu.Pin.GPIO_Pin3;
            Cpu.Pin pinDown = Cpu.Pin.GPIO_Pin4;

            // Use the hardware provider to get the pins.  If the left pin is 
            // not set, assume none of the pins are set and set the left pin 
            // back to the default emulator value.
            if ((pinLeft = hwProvider.GetButtonPins(Button.VK_LEFT)) ==
                Cpu.Pin.GPIO_NONE)
                pinLeft = Cpu.Pin.GPIO_Pin0;
            else
            {
                pinRight = hwProvider.GetButtonPins(Button.VK_RIGHT);
                pinUp = hwProvider.GetButtonPins(Button.VK_UP);
                pinSelect = hwProvider.GetButtonPins(Button.VK_SELECT);
                pinDown = hwProvider.GetButtonPins(Button.VK_DOWN);
            }

            // Allocate button pads and assign the (emulated) hardware pins as 
            // input from specific buttons.
            ButtonPad[] buttons = new ButtonPad[]
            {
                // Associate the buttons with the pins as discovered or set 
                // above.
                new ButtonPad(this, Button.VK_LEFT  , pinLeft  ),
                new ButtonPad(this, Button.VK_RIGHT , pinRight ),
                new ButtonPad(this, Button.VK_UP    , pinUp    ),
                new ButtonPad(this, Button.VK_SELECT, pinSelect),
                new ButtonPad(this, Button.VK_DOWN  , pinDown  ),
            };

            this.buttons = buttons;
        }

        /// <summary>
        /// Represents the button pad of an emulated device, containing five 
        /// buttons for user input.
        /// </summary>
        internal class ButtonPad : IDisposable
        {
            private Button button;
            private InterruptPort port;
            private GPIOButtonInputProvider sink;
            private ButtonDevice buttonDevice;

            /// <summary>
            /// Constructs a ButtonPad that handles the emulated hardware's 
            /// button interrupts.
            /// </summary>
            /// <param name="sink"></param>
            /// <param name="button"></param>
            /// <param name="pin"></param>
            public ButtonPad(GPIOButtonInputProvider sink, Button button, 
                Cpu.Pin pin)
            {
                this.sink = sink;
                this.button = button;
                this.buttonDevice = InputManager.CurrentInputManager.ButtonDevice;

                if (pin != Cpu.Pin.GPIO_NONE)
                {
                    // When this GPIO pin is true, call the Interrupt method.
                    port = new InterruptPort(pin, true,
                        Port.ResistorMode.PullUp,
                        Port.InterruptMode.InterruptEdgeBoth);
                    port.OnInterrupt += new NativeEventHandler(this.Interrupt);
                }
            }

            protected virtual void Dispose(bool disposing)
            {
                if (disposing)
                {
                    // dispose managed resources
                    if(port != null)
                        port.Dispose();
                }
                // free native resources
            }

            public void Dispose()
            {
                Dispose(true);
                GC.SuppressFinalize(this);
            }


            /// <summary>
            /// 
            /// </summary>
            /// <param name="data1"></param>
            /// <param name="data2"></param>
            /// <param name="time"></param>
            void Interrupt(uint data1, uint data2, DateTime time)
            {
                RawButtonActions action = (data2 != 0) ? 
                    RawButtonActions.ButtonUp : RawButtonActions.ButtonDown;

                RawButtonInputReport report = 
                    new RawButtonInputReport(sink.source, time, button, action);

                // Queue the button press to the input provider site.
                sink.Dispatcher.BeginInvoke(sink.callback, new InputReportArgs(buttonDevice, report));
            }
        }
    }
}
