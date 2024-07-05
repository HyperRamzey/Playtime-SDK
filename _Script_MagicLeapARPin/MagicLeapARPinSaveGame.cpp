#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "MagicLeapARPinSaveGame.hpp"
void* _Script_MagicLeapARPin::MagicLeapARPinSaveGame::get_PinnedID() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_MagicLeapARPin::MagicLeapARPinSaveGame::get_bShouldPinActor() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_MagicLeapARPin::MagicLeapARPinSaveGame::get_ComponentWorldTransform() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MagicLeapARPin::MagicLeapARPinSaveGame::get_PinTransform() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_MagicLeapARPin::MagicLeapARPinSaveGame::set_bShouldPinActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame");
    return result;
}
