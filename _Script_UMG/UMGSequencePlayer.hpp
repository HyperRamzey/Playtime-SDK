#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UMGSequencePlayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x3a0]; public:
    _Script_UMG::WidgetAnimation*& get_Animation();
    void* get_RootTemplateInstance();
    static _Script_CoreUObject::Class* static_class();
    void SetUserTag(void* InUserTag);
    void* GetUserTag();
}; // Size: 0x3c8
#pragma pack(pop)
}
