#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct InteractiveToolPropertySet : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    _Script_InteractiveToolsFramework::InteractiveToolPropertySet*& get_CachedProperties();
    bool get_bIsPropertySetEnabled();
    void set_bIsPropertySetEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
