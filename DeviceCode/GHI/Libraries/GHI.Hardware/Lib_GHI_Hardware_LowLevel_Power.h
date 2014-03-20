//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------


#ifndef _LIB_GHI_HARDWARE_LOWLEVEL_POWER_H_
#define _LIB_GHI_HARDWARE_LOWLEVEL_POWER_H_

namespace GHI
{
    namespace Hardware
    {
        namespace LowLevel
        {
            struct Power
            {
                // Helper Functions to access fields of managed object
                // Declaration of stubs. These functions are implemented by Interop code developers
                static void NativeHibernate( UINT32 param0, HRESULT &hr );
                static void NativeSetEthernetOscillator( INT8 param0, HRESULT &hr );
            };
        }
    }
}
#endif  //_LIB_GHI_HARDWARE_LOWLEVEL_POWER_H_
