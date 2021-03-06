//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     .NET Micro Framework MFSvcUtil.Exe
//     Runtime Version:2.0.00001.0001
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------


using System;
using System.Xml;
using Dpws.Client;
using Dpws.Client.Discovery;
using Dpws.Client.Eventing;
using Ws.Services;
using Ws.Services.Utilities;
using Ws.Services.Binding;
using Ws.Services.Soap;
using Ws.Services.WsaAddressing;
using Ws.Services.Xml;

namespace localhost.ServiceHelloWCF
{
    
    
    public class ServiceHelloWCFClientProxy : DpwsClient
    {
        
        private IRequestChannel m_requestChannel = null;
        
        public ServiceHelloWCFClientProxy(Binding binding, ProtocolVersion version) : 
                base(binding, version)
        {

            // Set client endpoint address
            m_requestChannel = m_localBinding.CreateClientChannel(new ClientBindingContext(m_version));
        }
        
        public virtual HelloWCFResponse HelloWCF(HelloWCF req)
        {

            // Create request header
            String action;
            action = "http://localhost/ServiceHelloWCF/IServiceHelloWCF/HelloWCF";
            WsWsaHeader header;
            header = new WsWsaHeader(action, null, EndpointAddress, m_version.AnonymousUri, null, null);
            WsMessage request = new WsMessage(header, req, WsPrefix.None);

            // Create request serializer
            HelloWCFDataContractSerializer reqDcs;
            reqDcs = new HelloWCFDataContractSerializer("HelloWCF", "http://localhost/ServiceHelloWCF");
            request.Serializer = reqDcs;
            request.Method = "HelloWCF";


            // Send service request
            m_requestChannel.Open();
            WsMessage response = m_requestChannel.Request(request);
            m_requestChannel.Close();

            // Process response
            HelloWCFResponseDataContractSerializer respDcs;
            respDcs = new HelloWCFResponseDataContractSerializer("HelloWCFResponse", "http://localhost/ServiceHelloWCF");
            HelloWCFResponse resp;
            resp = ((HelloWCFResponse)(respDcs.ReadObject(response.Reader)));
            response.Reader.Dispose();
            response.Reader = null;
            
            return resp;
        }
    }
}
