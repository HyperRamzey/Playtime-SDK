#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BundleAsset.hpp"
#include "ItemAsset.hpp"
void _Script_Playtime_Multiplayer::BundleAsset::set_bOutfit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::BundleAsset::get_bOutfit() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::BundleAsset::get_BundlePreviewClass() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Playtime_Multiplayer::BundleAsset::get_BundleContent() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::BundleAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.BundleAsset");
    return result;
}
