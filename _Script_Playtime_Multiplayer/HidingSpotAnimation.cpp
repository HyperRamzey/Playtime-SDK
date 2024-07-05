#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "HidingSpotAnimation.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HidingSpotAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.HidingSpotAnimation");
    return result;
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::HidingSpotAnimation::get_Montage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x0);
}
bool _Script_Playtime_Multiplayer::HidingSpotAnimation::get_UsingRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::HidingSpotAnimation::set_UsingRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
