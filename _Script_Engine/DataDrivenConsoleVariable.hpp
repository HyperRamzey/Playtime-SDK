#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DataDrivenConsoleVariable {
    private: char pad_0[0x50]; public:
    void* get_Type();
    void* get_Name();
    void* get_Tooltip();
    float& get_DefaultValueFloat();
    int32_t& get_DefaultValueInt();
    bool get_DefaultValueBool();
    void set_DefaultValueBool(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
