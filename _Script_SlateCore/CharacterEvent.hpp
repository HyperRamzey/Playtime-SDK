#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InputEvent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct CharacterEvent : public InputEvent {
    private: char pad_18[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}