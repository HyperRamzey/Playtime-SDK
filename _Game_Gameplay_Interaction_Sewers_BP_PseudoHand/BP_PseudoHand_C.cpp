#include "..\FUObjectArray.hpp"
#include "BP_PseudoHand_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PseudoHand.hpp"
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C::get_SK_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_PseudoHand.BP_PseudoHand_C");
    return result;
}
