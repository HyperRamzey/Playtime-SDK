#include "..\FUObjectArray.hpp"
#include "BP_ZoneDetectionComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\ZoneDetectionComponent.hpp"
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/BP_ZoneDetectionComponent.BP_ZoneDetectionComponent_C");
    return result;
}
