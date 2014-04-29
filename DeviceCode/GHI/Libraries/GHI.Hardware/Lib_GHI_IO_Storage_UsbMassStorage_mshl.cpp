//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Lib.h"
#include "Lib_GHI_IO_Storage_UsbMassStorage.h"

using namespace GHI::IO::Storage;


HRESULT Library_Lib_GHI_IO_Storage_UsbMassStorage::NativeConstructor___VOID__U4__U1__U1( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param0 ) );

        UINT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 2, param1 ) );

        UINT8 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 3, param2 ) );

        UsbMassStorage::NativeConstructor( pMngObj,  param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_IO_Storage_UsbMassStorage::NativeFinalize___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UsbMassStorage::NativeFinalize( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_IO_Storage_UsbMassStorage::NativeMount___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UsbMassStorage::NativeMount( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Lib_GHI_IO_Storage_UsbMassStorage::NativeUnmount___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UsbMassStorage::NativeUnmount( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}