////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>

//--//

#if defined(ADS_LINKER_BUG__NOT_ALL_UNUSED_VARIABLES_ARE_REMOVED)
#pragma arm section zidata = "g_NetworkConfig_EMX"
#endif

//GHI JOE: We will have 4 interfaces (MAC(built-in ethernet), ENC28(SPI), RS9110(wifi and PPP) but only one interface can be the active one at a time.
//We will use subindex flag to indicate the selected active interface.
/// Bits 0-15 regular flags (0-7 for microsoft (DHCP or static, 8-15 for GHI to define the active interface)
///     16-19 Type
///     20-23 SubIndex.
// The interface is active when bit 8 to 15 are 1111 1111 or 0x00FF
// Important note: None of the interfaces will be open on system boot-up. The interface gets open in the user's managed application.


//#error I am the one compiling!!!!!!!!!!!
NETWORK_CONFIG g_NetworkConfig =
{
    { TRUE },
    NETWORK_INTERFACE_COUNT,      // interface count
    {       
        {
			
            SOCK_NETWORKCONFIGURATION_FLAGS_DHCP, //0x00000000,        /*flags         to enable wireless bitwise OR this value with  SOCK_NETWORKCONFIGURATION_FLAGS_TYPE__set(SOCK_NETWORKCONFIGURATION_FLAGS_WIRELESS)*/  
            
			SOCK_MAKE_IP_ADDR_LITTLEEND(192,168,  1,202), /*ip address */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(255,255,255,  0), /*subnet mask*/  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*gateway    */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*dns1       */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*dns2       */  
            SOCK_NETWORKCONFIGURATION_INTERFACETYPE_ETHERNET,        /* Change to SOCK_NETWORKCONFIGURATION_INTERFACETYPE_WIRELESS_80211 for wireless */ 
            6,              /*mac address length*/                  
            {               /*mac address*/                         
                0x00, 0x21, 0x03, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
            }                                                       
        },
		{                                      
            SOCK_NETWORKCONFIGURATION_FLAGS_DHCP, //0x00000000,        /*flags         to enable wireless bitwise OR this value with  SOCK_NETWORKCONFIGURATION_FLAGS_TYPE__set(SOCK_NETWORKCONFIGURATION_FLAGS_WIRELESS)*/  
            SOCK_MAKE_IP_ADDR_LITTLEEND(192,168,  0,213), /*ip address */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(255,255,255,  0), /*subnet mask*/  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*gateway    */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*dns1       */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*dns2       */  
            SOCK_NETWORKCONFIGURATION_INTERFACETYPE_ETHERNET,        /* Change to SOCK_NETWORKCONFIGURATION_INTERFACETYPE_WIRELESS_80211 for wireless */ 
            6,              /*mac address length*/                  
            {               /*mac address*/                         
                0x00, 0x21, 0x03, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
            }                                                       
        },
		{                                      
            SOCK_NETWORKCONFIGURATION_FLAGS_DHCP, //0x00000000,        /*flags         to enable wireless bitwise OR this value with  SOCK_NETWORKCONFIGURATION_FLAGS_TYPE__set(SOCK_NETWORKCONFIGURATION_FLAGS_WIRELESS)*/  
            SOCK_MAKE_IP_ADDR_LITTLEEND(192,168,  1,203), /*ip address */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(255,255,255,  0), /*subnet mask*/  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*gateway    */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*dns1       */  
            SOCK_MAKE_IP_ADDR_LITTLEEND(  0,  0,  0,  0), /*dns2       */  
            SOCK_NETWORKCONFIGURATION_INTERFACETYPE_WIRELESS_80211,        
            6,              /*mac address length*/                  
            {               /*mac address*/                         
                0x00, 0x21, 0x03, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
            }                                                       
        },
    },
};


WIRELESS_CONFIG g_WirelessConfig = 
{
    /// This is a sample only.
    { TRUE },
    1,
    {
        {
            WIRELESS_FLAG_AUTHENTICATION__set(WIRELESS_FLAG_AUTHENTICATION_EAP)              |
            WIRELESS_FLAG_ENCRYPTION__set    (WIRELESS_FLAG_ENCRYPTION_WPA)                  |
            WIRELESS_FLAG_RADIO__set         (WIRELESS_FLAG_RADIO_b | WIRELESS_FLAG_RADIO_g),

            {
                'P','A','S','S','P','H','R','A','S','E','\0',
            },
            8,
            { 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
            },
            0,
            {
                0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            },
            {
                'S','S','I','D','_','1','\0',
            },
        },
    },
};

#if defined(ADS_LINKER_BUG__NOT_ALL_UNUSED_VARIABLES_ARE_REMOVED)
#pragma arm section zidata
#endif



