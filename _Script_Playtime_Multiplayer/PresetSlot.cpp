#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PresetSlot.hpp"
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_LeftHand() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Grabpack() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_GrabpackColor() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_LeftHandColor() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_RightHand() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_RightHandColor() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Skin() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_SkinColor() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Hat() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_HatColor() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Face() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_FaceColor() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Shirt() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_ShirtColor() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Pants() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_PantsColor() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_Shoes() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Playtime_Multiplayer::PresetSlot::get_ShoesColor() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_Playtime_Multiplayer::PresetSlot::get_Emotes() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PresetSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.PresetSlot");
    return result;
}
