#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "TrainStation.hpp"
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::TrainStation::get_DebugTrain() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::TrainStation::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
void* _Script_Playtime_Multiplayer::TrainStation::get_DebugTrainSettings() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_Playtime_Multiplayer::TrainStation::get_DisplayCarts() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::TrainStation::get_TrackSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x230);
}
void* _Script_Playtime_Multiplayer::TrainStation::get_DebugTrainAssemblyData() {
    return (void*)((uintptr_t)this + 0x250);
}
float& _Script_Playtime_Multiplayer::TrainStation::get_Length() {
    return *(float*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TrainStation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.TrainStation");
    return result;
}
void _Script_Playtime_Multiplayer::TrainStation::PseudoConstruct() {
    return;
}
float _Script_Playtime_Multiplayer::TrainStation::GetStopDistance() {
    return;
}
int32_t _Script_Playtime_Multiplayer::TrainStation::GetFullCartCount() {
    return;
}
