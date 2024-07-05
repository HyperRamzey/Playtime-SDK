#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct ScriptStruct;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RigVM {
#pragma pack(push, 1)
struct RigVMParameter {
    private: char pad_0[0x30]; public:
    void* get_Type();
    void* get_Name();
    int32_t& get_RegisterIndex();
    void* get_CPPType();
    _Script_CoreUObject::ScriptStruct*& get_ScriptStruct();
    void* get_ScriptStructPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
