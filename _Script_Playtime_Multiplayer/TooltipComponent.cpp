#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "TooltipComponent.hpp"
void* _Script_Playtime_Multiplayer::TooltipComponent::get_Key() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void _Script_Playtime_Multiplayer::TooltipComponent::set_bCanShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::TooltipComponent::get_Duration() {
    return *(float*)((uintptr_t)this + 0x218);
}
void* _Script_Playtime_Multiplayer::TooltipComponent::get_Tooltip() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Script_Playtime_Multiplayer::TooltipComponent::ClearUpdateTimer() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TooltipComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.TooltipComponent");
    return result;
}
float& _Script_Playtime_Multiplayer::TooltipComponent::get_Distance() {
    return *(float*)((uintptr_t)this + 0x21c);
}
bool _Script_Playtime_Multiplayer::TooltipComponent::get_bCanShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::TooltipComponent::get_TargetClass() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Script_Playtime_Multiplayer::TooltipComponent::StartUpdateTimer() {
    return;
}
void _Script_Playtime_Multiplayer::TooltipComponent::ShowTooltip(bool Value) {
    return;
}
void _Script_Playtime_Multiplayer::TooltipComponent::RetryTooltip() {
    return;
}
