//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _LIB_H_
#define _LIB_H_

#include <TinyCLR_Interop.h>
struct Library_Lib_GHI_Hardware_Can
{
    static const int FIELD_STATIC__instanceList = 0;
    static const int FIELD_STATIC__instanceListLock = 1;
    static const int FIELD_STATIC__emxTimings = 2;
    static const int FIELD_STATIC__g120Timings = 3;
    static const int FIELD_STATIC__g400Timings = 4;

    static const int FIELD__disposed = 1;
    static const int FIELD__enabled = 2;
    static const int FIELD__channel = 3;
    static const int FIELD__receiveBufferSize = 4;
    static const int FIELD__baudRateRegister = 5;
    static const int FIELD__MessageAvailable = 6;
    static const int FIELD__ErrorReceived = 7;

    TINYCLR_NATIVE_DECLARE(NativeSetExplicitFilters___VOID__SZARRAY_U4);
    TINYCLR_NATIVE_DECLARE(NativeSetGroupFilters___VOID__SZARRAY_U4__SZARRAY_U4);
    TINYCLR_NATIVE_DECLARE(NativeEnable___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeDisable___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeReset___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeReceiveErrorCount___I4);
    TINYCLR_NATIVE_DECLARE(NativeTransmitErrorCount___I4);
    TINYCLR_NATIVE_DECLARE(NativeReceivedMessageCount___I4);
    TINYCLR_NATIVE_DECLARE(NativeTransmittedMessagesSent___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeTransmissionAllowed___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeReadMessages___I4__SZARRAY_GHIHardwareCanMessage__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeSendMessages___I4__SZARRAY_GHIHardwareCanMessage__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeDiscardIncomingMessages___VOID);
    TINYCLR_NATIVE_DECLARE(NativeSourceClock___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(NativeCalculateRegisterValue___STATIC__U4__I4__I4__I4__I4__I4__BOOLEAN);

    //--//

};

struct Library_Lib_GHI_Hardware_Configuration__Display
{
    static const int FIELD_STATIC__width = 5;
    static const int FIELD_STATIC__height = 6;
    static const int FIELD_STATIC__outputEnableIsFixed = 7;
    static const int FIELD_STATIC__outputEnablePolarity = 8;
    static const int FIELD_STATIC__pixelPolarity = 9;
    static const int FIELD_STATIC__pixelClockRateKHz = 10;
    static const int FIELD_STATIC__horizontalSyncPolarity = 11;
    static const int FIELD_STATIC__horizontalSyncPulseWidth = 12;
    static const int FIELD_STATIC__horizontalBackPorch = 13;
    static const int FIELD_STATIC__horizontalFrontPorch = 14;
    static const int FIELD_STATIC__verticalSyncPolarity = 15;
    static const int FIELD_STATIC__verticalSyncPulseWidth = 16;
    static const int FIELD_STATIC__verticalBackPorch = 17;
    static const int FIELD_STATIC__verticalFrontPorch = 18;
    static const int FIELD_STATIC__bootupMessages = 19;
    static const int FIELD_STATIC__rotation = 20;

    TINYCLR_NATIVE_DECLARE(NativeGetBootupMessage___STATIC__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSetBootupMessage___STATIC__BOOLEAN__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeGetRotation___STATIC__GHIHardwareConfigurationDisplayRotation);
    TINYCLR_NATIVE_DECLARE(NativeSetRotation___STATIC__BOOLEAN__GHIHardwareConfigurationDisplayRotation);
    TINYCLR_NATIVE_DECLARE(NativeGetConfiguration___STATIC__VOID__BYREF_U4__BYREF_U4__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(NativeSetConfiguration___STATIC__BOOLEAN__U4__U4__BOOLEAN__BOOLEAN__BOOLEAN__BOOLEAN__BOOLEAN__U1__U1__U1__U1__U1__U1__U4);

    //--//

};

struct Library_Lib_GHI_Hardware_Can__ErrorReceivedEventArgs
{
    static const int FIELD__error = 1;


    //--//

};

struct Library_Lib_GHI_Hardware_LowLevel_AddressSpace
{
    TINYCLR_NATIVE_DECLARE(NativeWrite___STATIC__VOID__U4__SZARRAY_U1__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__VOID__U4__SZARRAY_U1__I4__I4);

    //--//

};

struct Library_Lib_GHI_Hardware_LowLevel_Power
{
    static const int FIELD_STATIC__ethernetEnabled = 21;

    TINYCLR_NATIVE_DECLARE(NativeHibernate___STATIC__VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeSetEthernetOscillator___STATIC__VOID__BOOLEAN);

    //--//

};

struct Library_Lib_GHI_Hardware_LowLevel_Register
{
    static const int FIELD__address = 1;

    TINYCLR_NATIVE_DECLARE(NativeWrite___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeRead___U4);
    TINYCLR_NATIVE_DECLARE(NativeSetBits___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeClearBits___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeToggleBits___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeIsValid___STATIC__BOOLEAN__U4);

    //--//

};

struct Library_Lib_GHI_Hardware_LowLevel_Watchdog
{
    static const int FIELD_STATIC__lastResetCause = 22;
    static const int FIELD_STATIC__maxTimeout = 23;
    static const int FIELD_STATIC__timeout = 24;
    static const int FIELD_STATIC__timeoutSet = 25;
    static const int FIELD_STATIC__enabled = 26;

    TINYCLR_NATIVE_DECLARE(NativeLastResetCause___STATIC__U1);
    TINYCLR_NATIVE_DECLARE(NativeGetMaxTimeout___STATIC__U4);
    TINYCLR_NATIVE_DECLARE(NativeEnable___STATIC__VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeDisable___STATIC__VOID);
    TINYCLR_NATIVE_DECLARE(NativeResetCounter___STATIC__VOID);

    //--//

};

struct Library_Lib_GHI_Hardware_RealTimeClock
{
    static const int FIELD_STATIC__alarm = 27;

    TINYCLR_NATIVE_DECLARE(NativeSetTime___STATIC__VOID__I4__I4__I4__I4__I4__I4__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeGetTime___STATIC__VOID__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4);
    TINYCLR_NATIVE_DECLARE(NativeSetAlarm___STATIC__VOID__I4__I4__I4__I4__I4__I4__I4__I4);

    //--//

};

struct Library_Lib_GHI_Hardware_SignalCapture
{
    static const int FIELD__timeout = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__port = 3;

    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__I4__U4__BYREF_BOOLEAN__SZARRAY_U4__I4__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__I4__U4__BOOLEAN__SZARRAY_U4__I4__I4__I4);

    //--//

};

struct Library_Lib_GHI_Hardware_SignalGenerator
{
    static const int FIELD__pin = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__nativePointer = 3;

    TINYCLR_NATIVE_DECLARE(NativeConstructor___BOOLEAN__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeDispose___VOID);
    TINYCLR_NATIVE_DECLARE(NativeIsActive___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSet___VOID__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSet___BOOLEAN__BOOLEAN__SZARRAY_U4__I4__I4__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSet___VOID__BOOLEAN__SZARRAY_U4__I4__I4__U4__BOOLEAN__U4);

    //--//

};

struct Library_Lib_GHI_Hardware_SoftwareI2CBus
{
    static const int FIELD__emptyBuffer = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__clockPin = 3;
    static const int FIELD__dataPin = 4;

    TINYCLR_NATIVE_DECLARE(NativeWriteRead___STATIC__BOOLEAN__I4__I4__U1__SZARRAY_U1__I4__I4__SZARRAY_U1__I4__I4__BYREF_I4__BYREF_I4);

    //--//

};

struct Library_Lib_GHI_Hardware_SoftwareI2CBus__I2CDevice
{
    static const int FIELD__bus = 1;
    static const int FIELD__address = 2;


    //--//

};

struct Library_Lib_GHI_Hardware_Can__Message
{
    static const int FIELD__data = 1;
    static const int FIELD__arbitrationId = 2;
    static const int FIELD__length = 3;
    static const int FIELD__isRTR = 4;
    static const int FIELD__isEID = 5;
    static const int FIELD__timeStamp = 6;


    //--//

};

struct Library_Lib_GHI_Hardware_Can__MessageAvailableEventArgs
{
    static const int FIELD__available = 1;


    //--//

};

struct Library_Lib_GHI_Hardware_Configuration__StartupLogo
{
    static const int FIELD_STATIC__width = 28;
    static const int FIELD_STATIC__height = 29;
    static const int FIELD_STATIC__x = 30;
    static const int FIELD_STATIC__y = 31;
    static const int FIELD_STATIC__enabled = 32;
    static const int FIELD_STATIC__image = 33;

    TINYCLR_NATIVE_DECLARE(NativeSupportedWidth___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(NativeSupportedHeight___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(NativeGetEnabled___STATIC__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeGetBitmap___STATIC__VOID__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeGetCoords___STATIC__VOID__BYREF_I4__BYREF_I4);
    TINYCLR_NATIVE_DECLARE(NativeSave___STATIC__BOOLEAN__SZARRAY_U1__I4__I4__BOOLEAN);

    //--//

};

struct Library_Lib_GHI_Hardware_Can__Timings
{
    static const int FIELD__propagation = 1;
    static const int FIELD__phase1 = 2;
    static const int FIELD__phase2 = 3;
    static const int FIELD__brp = 4;
    static const int FIELD__synchronizationJumpWidth = 5;
    static const int FIELD__useMultiBitSampling = 6;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_GHI_Hardware;

#endif  //_LIB_H_
