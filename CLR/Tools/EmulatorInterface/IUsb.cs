////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Runtime.InteropServices;

namespace Microsoft.SPOT.Emulator.Usb
{
    public interface IUsbDriver
    {
        bool Initialize();
        bool Uninitialize();
        int Write(int UsbPortNum, IntPtr Data, uint size);
        int Read(int UsbPortNum, IntPtr Data, uint size);
        bool Flush(int UsbPortNum);
    }
}
