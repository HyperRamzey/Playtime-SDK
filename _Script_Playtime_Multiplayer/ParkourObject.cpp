#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "ParkourObject.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::ParkourObject::get_Trigger_A() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ParkourObject::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::ParkourObject::get_ParkourMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x258);
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::ParkourObject::get_Trigger_B() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::TextRenderComponent*& _Script_Playtime_Multiplayer::ParkourObject::get_Label_B() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::TextRenderComponent*& _Script_Playtime_Multiplayer::ParkourObject::get_Label_A() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ParkourObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ParkourObject");
    return result;
}
void* _Script_Playtime_Multiplayer::ParkourObject::get_ParkourType() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_UMG::UserWidget*& _Script_Playtime_Multiplayer::ParkourObject::get_ParkourWidget() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x250);
}
void _Script_Playtime_Multiplayer::ParkourObject::set_bOneSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x260 + 0);
    *(uint8_t*)((uintptr_t)this + 0x260 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::ParkourObject::get_bOneSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x260 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::ParkourObject::get_Width() {
    return *(float*)((uintptr_t)this + 0x264);
}
_Script_CoreUObject::Vector _Script_Playtime_Multiplayer::ParkourObject::GetParkourStartLocation(_Script_Engine::PrimitiveComponent* OverlappingComponent) {
    return;
}
_Script_CoreUObject::Vector _Script_Playtime_Multiplayer::ParkourObject::GetParkourEndLocation(_Script_Engine::PrimitiveComponent* OverlappingComponent) {
    return;
}
float _Script_Playtime_Multiplayer::ParkourObject::GetParkourDistance(_Script_CoreUObject::Vector StartLocation, _Script_CoreUObject::Vector EndLocation) {
    return;
}
void _Script_Playtime_Multiplayer::ParkourObject::EndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
bool _Script_Playtime_Multiplayer::ParkourObject::CanSetParkour(_Script_Engine::Actor* Actor, _Script_Engine::PrimitiveComponent* Comp) {
    return;
}
void _Script_Playtime_Multiplayer::ParkourObject::BeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
