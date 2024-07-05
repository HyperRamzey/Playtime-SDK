#include "..\FUObjectArray.hpp"
#include "BP_SurvivorFootstepNotify_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
_Script_Engine::SoundBase*& _Game_Gameplay_Character_Footsteps_BP_SurvivorFootstepNotify::BP_SurvivorFootstepNotify_C::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x38);
}
bool _Game_Gameplay_Character_Footsteps_BP_SurvivorFootstepNotify::BP_SurvivorFootstepNotify_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
void* _Game_Gameplay_Character_Footsteps_BP_SurvivorFootstepNotify::BP_SurvivorFootstepNotify_C::get_BoneToTrace() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Game_Gameplay_Character_Footsteps_BP_SurvivorFootstepNotify::BP_SurvivorFootstepNotify_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Character/Footsteps/BP_SurvivorFootstepNotify.BP_SurvivorFootstepNotify_C");
    return result;
}
bool _Game_Gameplay_Character_Footsteps_BP_SurvivorFootstepNotify::BP_SurvivorFootstepNotify_C::Not_FPS_Legs(_Script_CoreUObject::Object* Mesh) {
    return;
}
