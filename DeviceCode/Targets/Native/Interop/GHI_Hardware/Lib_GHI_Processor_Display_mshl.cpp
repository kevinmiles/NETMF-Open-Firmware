//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Lib.h"
#include "Lib_GHI_Processor_Display.h"

using namespace GHI::Processor;


HRESULT Library_Lib_GHI_Processor_Display::NativeGetLcdConfiguration___STATIC__VOID__BYREF_BOOLEAN__BYREF_U1__BYREF_U4__BYREF_U4__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT8 * param0;
        UINT8 heapblock0[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock0, 0, param0 ) );

        UINT8 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock1, 1, param1 ) );

        UINT32 * param2;
        UINT8 heapblock2[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock2, 2, param2 ) );

        UINT32 * param3;
        UINT8 heapblock3[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock3, 3, param3 ) );

        INT8 * param4;
        UINT8 heapblock4[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock4, 4, param4 ) );

        INT8 * param5;
        UINT8 heapblock5[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock5, 5, param5 ) );

        INT8 * param6;
        UINT8 heapblock6[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock6, 6, param6 ) );

        INT8 * param7;
        UINT8 heapblock7[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock7, 7, param7 ) );

        INT8 * param8;
        UINT8 heapblock8[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock8, 8, param8 ) );

        UINT8 * param9;
        UINT8 heapblock9[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock9, 9, param9 ) );

        UINT8 * param10;
        UINT8 heapblock10[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock10, 10, param10 ) );

        UINT8 * param11;
        UINT8 heapblock11[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock11, 11, param11 ) );

        UINT8 * param12;
        UINT8 heapblock12[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock12, 12, param12 ) );

        UINT8 * param13;
        UINT8 heapblock13[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock13, 13, param13 ) );

        UINT8 * param14;
        UINT8 heapblock14[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ByRef( stack, heapblock14, 14, param14 ) );

        UINT32 * param15;
        UINT8 heapblock15[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ByRef( stack, heapblock15, 15, param15 ) );

        Display::NativeGetLcdConfiguration( param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, hr );
        TINYCLR_CHECK_HRESULT( hr );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock0, 0 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 1 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock2, 2 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock3, 3 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock4, 4 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock5, 5 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock6, 6 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock7, 7 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock8, 8 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock9, 9 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock10, 10 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock11, 11 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock12, 12 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock13, 13 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock14, 14 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock15, 15 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Processor_Display::NativeSetLcdConfiguration___STATIC__BOOLEAN__BOOLEAN__U1__U4__U4__BOOLEAN__BOOLEAN__BOOLEAN__BOOLEAN__BOOLEAN__U1__U1__U1__U1__U1__U1__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 0, param0 ) );

        UINT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 1, param1 ) );

        UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 2, param2 ) );

        UINT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 3, param3 ) );

        INT8 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 4, param4 ) );

        INT8 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 5, param5 ) );

        INT8 param6;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 6, param6 ) );

        INT8 param7;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 7, param7 ) );

        INT8 param8;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 8, param8 ) );

        UINT8 param9;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 9, param9 ) );

        UINT8 param10;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 10, param10 ) );

        UINT8 param11;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 11, param11 ) );

        UINT8 param12;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 12, param12 ) );

        UINT8 param13;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 13, param13 ) );

        UINT8 param14;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 14, param14 ) );

        UINT32 param15;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 15, param15 ) );

        INT8 retVal = Display::NativeSetLcdConfiguration( param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Processor_Display::NativeSetSpiConfiguration___STATIC__BOOLEAN__I4__I4__I4__I4__BOOLEAN__BOOLEAN__BOOLEAN__I4__I4__I4__I4__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        INT8 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 4, param4 ) );

        INT8 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 5, param5 ) );

        INT8 param6;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 6, param6 ) );

        INT32 param7;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 7, param7 ) );

        INT32 param8;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 8, param8 ) );

        INT32 param9;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 9, param9 ) );

        INT32 param10;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 10, param10 ) );

        INT32 param11;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 11, param11 ) );

        INT8 param12;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 12, param12 ) );

        INT8 retVal = Display::NativeSetSpiConfiguration( param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Processor_Display::NativeSetTouchPins___STATIC__BOOLEAN__U4__U4__U4__U4__U4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UINT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param1 ) );

        UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 2, param2 ) );

        UINT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 3, param3 ) );

        UINT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 4, param4 ) );

        UINT32 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 5, param5 ) );

        INT8 retVal = Display::NativeSetTouchPins( param0, param1, param2, param3, param4, param5, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
