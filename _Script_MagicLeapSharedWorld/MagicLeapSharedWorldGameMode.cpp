#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameMode.hpp"
#include "MagicLeapSharedWorldGameMode.hpp"
#include "MagicLeapSharedWorldPlayerController.hpp"
#include "MagicLeapSharedWorldSharedData.hpp"
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::SelectChosenOne() {
    return;
}
float& _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::get_PinSelectionConfidenceThreshold() {
    return *(float*)((uintptr_t)this + 0x328);
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::get_SharedWorldData() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::get_OnNewLocalDataFromClients() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController*& _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::get_ChosenOne() {
    return *(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController**)((uintptr_t)this + 0x3d0);
}
bool _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::SendSharedWorldDataToClients() {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode");
    return result;
}
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameMode::DetermineSharedWorldData(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldSharedData& NewSharedWorldData) {
    return;
}
