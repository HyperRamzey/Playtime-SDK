#include "..\FUObjectArray.hpp"
#include "BP_ScalePlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void _Game_Gameplay_Testing_BP_ScalePlayer::BP_ScalePlayer_C::ExecuteUbergraph_BP_ScalePlayer(int32_t EntryPoint) {
    return;
}
void* _Game_Gameplay_Testing_BP_ScalePlayer::BP_ScalePlayer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Gameplay_Testing_BP_ScalePlayer::BP_ScalePlayer_C::ReceiveBeginPlay0() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Testing_BP_ScalePlayer::BP_ScalePlayer_C::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Testing_BP_ScalePlayer::BP_ScalePlayer_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Gameplay_Testing_BP_ScalePlayer::BP_ScalePlayer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Testing/BP_ScalePlayer.BP_ScalePlayer_C");
    return result;
}
