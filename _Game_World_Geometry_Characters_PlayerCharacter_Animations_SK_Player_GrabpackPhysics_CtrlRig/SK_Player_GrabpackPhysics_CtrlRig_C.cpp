#include "..\FUObjectArray.hpp"
#include "SK_Player_GrabpackPhysics_CtrlRig_C.hpp"
#include "..\_Script_ControlRig\ControlRig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_PlayerCharacter_Animations_SK_Player_GrabpackPhysics_CtrlRig::SK_Player_GrabpackPhysics_CtrlRig_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ControlRigBlueprintGeneratedClass /Game/World/Geometry/Characters/PlayerCharacter/Animations/SK_Player_GrabpackPhysics_CtrlRig.SK_Player_GrabpackPhysics_CtrlRig_C");
    return result;
}
