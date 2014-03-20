//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Lib.h"
#include "Lib_GHI_Hardware_SignalGenerator.h"

using namespace GHI::Hardware;


HRESULT Library_Lib_GHI_Hardware_SignalGenerator::NativeConstructor___BOOLEAN__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 1, param0 ) );

        INT8 retVal = SignalGenerator::NativeConstructor( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Hardware_SignalGenerator::NativeDispose___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        SignalGenerator::NativeDispose( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Hardware_SignalGenerator::NativeIsActive___BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 retVal = SignalGenerator::NativeIsActive( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Hardware_SignalGenerator::NativeSet___VOID__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 1, param0 ) );

        SignalGenerator::NativeSet( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Hardware_SignalGenerator::NativeSet___BOOLEAN__BOOLEAN__SZARRAY_U4__I4__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 1, param0 ) );

        CLR_RT_TypedArray_UINT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ARRAY( stack, 2, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param3 ) );

        INT8 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 5, param4 ) );

        INT8 retVal = SignalGenerator::NativeSet( pMngObj,  param0, param1, param2, param3, param4, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_Hardware_SignalGenerator::NativeSet___VOID__BOOLEAN__SZARRAY_U4__I4__I4__U4__BOOLEAN__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 1, param0 ) );

        CLR_RT_TypedArray_UINT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32_ARRAY( stack, 2, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param3 ) );

        UINT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 5, param4 ) );

        INT8 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 6, param5 ) );

        UINT32 param6;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 7, param6 ) );

        SignalGenerator::NativeSet( pMngObj,  param0, param1, param2, param3, param4, param5, param6, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}
