#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_CollectionBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_CollectionLoop : public RigUnit_CollectionBaseMutable {
    private: char pad_68[0x90]; public:
    void* get_Collection();
    void* get_Item();
    int32_t& get_Index();
    int32_t& get_Count();
    float& get_Ratio();
    bool get_Continue();
    void set_Continue(bool value);
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
