#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_UMG {
struct UserWidget;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint {
struct BP_NavWaypoint_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo {
#pragma pack(push, 1)
struct S_NavWaypointInfo {
    private: char pad_0[0x10]; public:
    _Script_UMG::UserWidget*& get_WaypointIconWidget_9_9AFFBED542FC858E188B6D820F75E643();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C*& get_WaypointActor_8_AAD17217487066910D483281D8EA57F1();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
