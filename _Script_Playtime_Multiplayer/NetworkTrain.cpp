#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "NetworkTrain.hpp"
int32_t& _Script_Playtime_Multiplayer::NetworkTrain::get_StartStation() {
    return *(int32_t*)((uintptr_t)this + 0x230);
}
bool _Script_Playtime_Multiplayer::NetworkTrain::get_bUseNewTrainSystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::NetworkTrain::set_bUseNewTrainSystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::NetworkTrain::get_Timer_SummonTrain() {
    return (void*)((uintptr_t)this + 0x228);
}
int32_t& _Script_Playtime_Multiplayer::NetworkTrain::get_EndStation() {
    return *(int32_t*)((uintptr_t)this + 0x234);
}
float& _Script_Playtime_Multiplayer::NetworkTrain::get_TrainDistance() {
    return *(float*)((uintptr_t)this + 0x238);
}
float& _Script_Playtime_Multiplayer::NetworkTrain::get_TrackLength() {
    return *(float*)((uintptr_t)this + 0x240);
}
void _Script_Playtime_Multiplayer::NetworkTrain::TimelineProgress(float Value) {
    return;
}
float& _Script_Playtime_Multiplayer::NetworkTrain::get_Speed() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void* _Script_Playtime_Multiplayer::NetworkTrain::get_TrainHandles() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_Playtime_Multiplayer::NetworkTrain::get_TrainStationClass() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Playtime_Multiplayer::NetworkTrain::TimelineEnded() {
    return;
}
void* _Script_Playtime_Multiplayer::NetworkTrain::get_GeneratedStations() {
    return (void*)((uintptr_t)this + 0x260);
}
float& _Script_Playtime_Multiplayer::NetworkTrain::get_CartOffset() {
    return *(float*)((uintptr_t)this + 0x270);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::NetworkTrain::get_CurveFloat() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x328);
}
float& _Script_Playtime_Multiplayer::NetworkTrain::get_TrainAlpha() {
    return *(float*)((uintptr_t)this + 0x274);
}
void* _Script_Playtime_Multiplayer::NetworkTrain::get_TrainCarts() {
    return (void*)((uintptr_t)this + 0x278);
}
bool _Script_Playtime_Multiplayer::NetworkTrain::get_bIsMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::NetworkTrain::set_bIsMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkTrain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkTrain");
    return result;
}
void _Script_Playtime_Multiplayer::NetworkTrain::Tick(float DeltaSeconds) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::SummonTrain(int32_t Station) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::SetupTimeline() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::ReconstructTrainStations() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::OnTrainStopped() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::OnTrainStarted() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::OnPassengerExit(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComponent) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::OnPassengerEnter(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComponent) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::Multi_StartTrain(float PlaybackPosition) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::MoveTrain(float Alpha, _Script_Engine::SceneComponent* Cart, int32_t CartIndex) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkTrain::BeginPlay() {
    return;
}
