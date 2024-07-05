#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct MediaIOConnection {
    private: char pad_0[0x20]; public:
    void* get_Device();
    void* get_protocol();
    void* get_TransportType();
    void* get_QuadTransportType();
    int32_t& get_PortIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
