#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RigVM {
#pragma pack(push, 1)
struct RigVMRegister {
    private: char pad_0[0x24]; public:
    void* get_Type();
    void* get_ByteIndex();
    void* get_ElementSize();
    void* get_ElementCount();
    void* get_SliceCount();
    void* get_AlignmentBytes();
    void* get_TrailingBytes();
    void* get_Name();
    int32_t& get_ScriptStructIndex();
    bool get_bIsArray();
    void set_bIsArray(bool value);
    bool get_bIsDynamic();
    void set_bIsDynamic(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
