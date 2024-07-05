#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "ActionAsset.hpp"
#include "ItemAsset.hpp"
bool _Script_Playtime_Multiplayer::ActionAsset::get_bIsGesture() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ActionAsset::set_bIsGesture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::ActionAsset::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x39);
}
_Script_Engine::AnimSequence* _Script_Playtime_Multiplayer::ActionAsset::GetRightHandGesture(bool& Valid) {
    return;
}
void* _Script_Playtime_Multiplayer::ActionAsset::get_Anims() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::AnimSequence* _Script_Playtime_Multiplayer::ActionAsset::GetThirdPersonEmote(bool& Valid) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ActionAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ActionAsset");
    return result;
}
_Script_Engine::AnimSequence* _Script_Playtime_Multiplayer::ActionAsset::GetLeftHandGesture(bool& Valid) {
    return;
}
_Script_Engine::AnimSequence* _Script_Playtime_Multiplayer::ActionAsset::GetFirstPersonEmote(bool& Valid) {
    return;
}
