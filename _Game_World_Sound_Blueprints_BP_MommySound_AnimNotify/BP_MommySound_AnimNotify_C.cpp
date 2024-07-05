#include "..\FUObjectArray.hpp"
#include "BP_MommySound_AnimNotify_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_World_Sound_Blueprints_BP_MommySound_AnimNotify::BP_MommySound_AnimNotify_C::get_Type() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Game_World_Sound_Blueprints_BP_MommySound_AnimNotify::BP_MommySound_AnimNotify_C::get_Volume() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Game_World_Sound_Blueprints_BP_MommySound_AnimNotify::BP_MommySound_AnimNotify_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/World/Sound/Blueprints/BP_MommySound_AnimNotify.BP_MommySound_AnimNotify_C");
    return result;
}
float& _Game_World_Sound_Blueprints_BP_MommySound_AnimNotify::BP_MommySound_AnimNotify_C::get_CrouchVolume() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Game_World_Sound_Blueprints_BP_MommySound_AnimNotify::BP_MommySound_AnimNotify_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
