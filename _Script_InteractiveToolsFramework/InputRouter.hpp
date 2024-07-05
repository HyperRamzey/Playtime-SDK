#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_InteractiveToolsFramework {
struct InputBehaviorSet;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct InputRouter : public _Script_CoreUObject::Object {
    private: char pad_28[0x88]; public:
    bool get_bAutoInvalidateOnHover();
    void set_bAutoInvalidateOnHover(bool value);
    bool get_bAutoInvalidateOnCapture();
    void set_bAutoInvalidateOnCapture(bool value);
    _Script_InteractiveToolsFramework::InputBehaviorSet*& get_ActiveInputBehaviors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
