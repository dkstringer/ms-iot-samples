//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

using namespace concurrency;

namespace com { namespace enocean { namespace Bridge { namespace WindowContact { namespace interface_1 {

ref class interface_1Consumer;

public ref class interface_1JoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property interface_1Consumer^ Consumer
    {
        interface_1Consumer^ get() { return m_consumer; }
    internal:
        void set(_In_ interface_1Consumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    interface_1Consumer^ m_consumer;
};

public ref class interface_1GetContactResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ Contact
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static interface_1GetContactResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new interface_1GetContactResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Contact = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static interface_1GetContactResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new interface_1GetContactResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    Platform::String^ m_value;
};

} } } } } 