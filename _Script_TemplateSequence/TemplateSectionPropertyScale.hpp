#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct TemplateSectionPropertyScale {
    private: char pad_0[0xc8]; public:
    void* get_ObjectBinding();
    void* get_PropertyBinding();
    void* get_PropertyScaleType();
    void* get_FloatChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
