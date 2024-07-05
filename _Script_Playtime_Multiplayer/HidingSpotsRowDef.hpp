#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HidingSpotsRowDef : public _Script_Engine::TableRowBase {
    private: char pad_8[0x50]; public:
    void* get_EnterPose();
    void* get_ExitPose();
    void* get_HidePose();
    void* get_ObjectOpen();
    void* get_ObjectClose();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
