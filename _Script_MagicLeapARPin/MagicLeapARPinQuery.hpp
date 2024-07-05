#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinQuery {
    private: char pad_0[0x68]; public:
    void* get_Types();
    int32_t& get_MaxResults();
    void* get_TargetPoint();
    float& get_Radius();
    bool get_bSorted();
    void set_bSorted(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
