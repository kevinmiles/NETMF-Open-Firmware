//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Lib.h"
#include "Lib_GHI_IO_Audio.h"

using namespace GHI::IO;


HRESULT Library_Lib_GHI_IO_Audio::NativePlayPCM___STATIC__VOID__U1__SZARRAY_U1__I4__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 0, param0 ) );

        CLR_RT_TypedArray_UINT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        INT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param4 ) );

        Audio::NativePlayPCM( param0, param1, param2, param3, param4, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}