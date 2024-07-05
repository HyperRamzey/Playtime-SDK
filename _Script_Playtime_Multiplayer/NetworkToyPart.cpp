#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "NetworkToyPart.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkToyPart::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkToyPart");
    return result;
}
void* _Script_Playtime_Multiplayer::NetworkToyPart::get_FindFloorTraceChannel() {
    return (void*)((uintptr_t)this + 0x238);
}
int32_t& _Script_Playtime_Multiplayer::NetworkToyPart::get_ToyPartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x23c);
}
bool _Script_Playtime_Multiplayer::NetworkToyPart::get_bHasHandAttached() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::NetworkToyPart::BP_CheckForNearbyPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkToyPart::set_bHasHandAttached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::NetworkToyPart::get_SecondaryObjectiveCheckTimer() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Script_Playtime_Multiplayer::NetworkToyPart::MoveToyDown() {
    return;
}
