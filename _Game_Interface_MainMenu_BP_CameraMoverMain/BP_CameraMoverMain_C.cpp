#include "..\FUObjectArray.hpp"
#include "BP_CameraMoverMain_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CameraActor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Script_Engine::CameraActor*& _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_PlayerCamera() {
    return *(_Script_Engine::CameraActor**)((uintptr_t)this + 0x290);
}
_Script_Engine::TimelineComponent*& _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_Transition() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x238);
}
void* _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_FromTransform() {
    return (void*)((uintptr_t)this + 0x2a0);
}
float& _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_Transition_Alpha_B5CADAA8441D3D8698A1AEA840F1B384() {
    return *(float*)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
void* _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_Transition__Direction_B5CADAA8441D3D8698A1AEA840F1B384() {
    return (void*)((uintptr_t)this + 0x234);
}
void* _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_Cameras() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::get_ToTransform() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/MainMenu/BP_CameraMoverMain.BP_CameraMoverMain_C");
    return result;
}
void _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::Transition__FinishedFunc() {
    return;
}
void _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::Transition__UpdateFunc() {
    return;
}
void _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::TransitionToCamera(void* Target, float Time, bool Smoothed) {
    return;
}
void _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C::ExecuteUbergraph_BP_CameraMoverMain(int32_t EntryPoint) {
    return;
}
