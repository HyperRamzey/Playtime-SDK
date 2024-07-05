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
struct RigVMRegisterOffset {
    private: char pad_0[0x48]; public:
    void* get_Segments();
    void* get_Type();
    void* get_CPPType();
    _Script_CoreUObject::ScriptStruct*& get_ScriptStruct();
    _Script_CoreUObject::ScriptStruct*& get_ParentScriptStruct();
    int32_t& get_ArrayIndex();
    void* get_ElementSize();
    void* get_CachedSegmentPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
