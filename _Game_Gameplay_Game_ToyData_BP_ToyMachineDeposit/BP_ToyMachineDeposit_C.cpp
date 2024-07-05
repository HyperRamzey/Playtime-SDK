#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_GM_Escape\GM_Escape_C.hpp"
#include "BP_ToyMachineDeposit_C.hpp"
#include "..\_Game_Interface_BPC_Tooltip\BPC_Tooltip_C.hpp"
#include "..\_Script_AIModule\AIPerceptionStimuliSourceComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\RectLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::PointLightComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_SM_ToyMachineDepositA2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::RectLightComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_RectLight() {
    return *(_Script_Engine::RectLightComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_HideZone() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_DarkFX() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x238);
}
float& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
_Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_BPC_Tooltip() {
    return *(_Game_Interface_BPC_Tooltip::BPC_Tooltip_C**)((uintptr_t)this + 0x248);
}
_Script_AIModule::AIPerceptionStimuliSourceComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_AIPerceptionStimuliSource() {
    return *(_Script_AIModule::AIPerceptionStimuliSourceComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Toy() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_ToyAction() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x278);
}
void* _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_OnToyDeposited() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Box_Characters() {
    return (void*)((uintptr_t)this + 0x290);
}
_Game_Base_GM_Escape::GM_Escape_C*& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_GM_Escape() {
    return *(_Game_Base_GM_Escape::GM_Escape_C**)((uintptr_t)this + 0x2a0);
}
void* _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Light_Color() {
    return (void*)((uintptr_t)this + 0x2ac);
}
float& _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Temperature() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
bool _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::get_Gm_Escape_Tutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::set_Gm_Escape_Tutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/ToyData/BP_ToyMachineDeposit.BP_ToyMachineDeposit_C");
    return result;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::InsertToy(int32_t ToyIndex, _Script_Engine::StaticMesh* ToyMesh) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::MultiAnimateToy() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::PlayDropAnimation(_Script_Engine::StaticMesh* ToyMesh) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::BndEvt__BP_ToyMachineDeposit_HideZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::ReceiveActorEndOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::SetEnabled() {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::ExecuteUbergraph_BP_ToyMachineDeposit(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Game_ToyData_BP_ToyMachineDeposit::BP_ToyMachineDeposit_C::OnToyDeposited__DelegateSignature() {
    return;
}
