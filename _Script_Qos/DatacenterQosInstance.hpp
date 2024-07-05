#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Qos {
#pragma pack(push, 1)
struct DatacenterQosInstance {
    private: char pad_0[0x68]; public:
    void* get_Definition();
    void* get_Result();
    int32_t& get_AvgPingMs();
    void* get_PingResults();
    void* get_LastCheckTimestamp();
    bool get_bUsable();
    void set_bUsable(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
