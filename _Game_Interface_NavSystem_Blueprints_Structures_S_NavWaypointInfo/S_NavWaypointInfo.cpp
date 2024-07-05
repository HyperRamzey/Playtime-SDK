#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint\BP_NavWaypoint_C.hpp"
#include "S_NavWaypointInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo::S_NavWaypointInfo::get_WaypointIconWidget_9_9AFFBED542FC858E188B6D820F75E643() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x0);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C*& _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo::S_NavWaypointInfo::get_WaypointActor_8_AAD17217487066910D483281D8EA57F1() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo::S_NavWaypointInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Interface/NavSystem/Blueprints/Structures/S_NavWaypointInfo.S_NavWaypointInfo");
    return result;
}
