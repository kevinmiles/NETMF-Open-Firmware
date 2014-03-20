//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Lib.h"
#include "Lib_GHI_Hardware_SignalCapture.h"

using namespace GHI::Hardware;


HRESULT Library_Lib_GHI_Hardware_SignalCapture::NativeRead___STATIC__I4__U4__BYREF_BOOLEAN__SZARRAY_U4__I4__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        INT8 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8_ByRef( stack, heapblock1, 1, param1 ) );

        CLR_RT_TypedArray_UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ARRAY( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        INT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param4 ) );

        INT32 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 5, param5 ) );

        INT32 retVal = SignalCapture::NativeRead( param0, param1, param2, param3, param4, param5, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 1 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Hardware_SignalCapture::NativeRead___STATIC__I4__U4__BOOLEAN__SZARRAY_U4__I4__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        INT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 1, param1 ) );

        CLR_RT_TypedArray_UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ARRAY( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        INT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param4 ) );

        INT32 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 5, param5 ) );

        INT32 retVal = SignalCapture::NativeRead( param0, param1, param2, param3, param4, param5, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
