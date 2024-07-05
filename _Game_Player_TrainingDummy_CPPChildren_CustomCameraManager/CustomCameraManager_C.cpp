#include "..\FUObjectArray.hpp"
#include "CustomCameraManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MinimalViewInfo.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeCameraManager.hpp"
bool _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::BlueprintUpdateCamera(_Script_Engine::Actor* CameraTarget, _Script_CoreUObject::Vector& NewCameraLocation, _Script_CoreUObject::Rotator& NewCameraRotation, float& NewCameraFOV) {
    return;
}
void* _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2810);
}
_Script_Engine::SceneComponent*& _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::get_AttachCam() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2818);
}
bool _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::get_IsBlending() {
    return (*(uint8_t*)((uintptr_t)this + 0x2820 + 0)) & 1 != 0;
}
void _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::set_IsBlending(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2820 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2820 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/TrainingDummy/CPPChildren/CustomCameraManager.CustomCameraManager_C");
    return result;
}
void _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::BP_OnBlendComplete0() {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::OnUpdatePOV0(_Script_Engine::MinimalViewInfo NewPOV) {
    return;
}
void _Game_Player_TrainingDummy_CPPChildren_CustomCameraManager::CustomCameraManager_C::ExecuteUbergraph_CustomCameraManager(int32_t EntryPoint) {
    return;
}
