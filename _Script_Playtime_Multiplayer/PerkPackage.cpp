#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PerkPackage.hpp"
void* _Script_Playtime_Multiplayer::PerkPackage::get_FirstPerk() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::PerkPackage::get_FirstPerkLevel() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_Playtime_Multiplayer::PerkPackage::get_ThirdPerk() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Playtime_Multiplayer::PerkPackage::get_SecondPerk() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Playtime_Multiplayer::PerkPackage::get_SecondPerkLevel() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PerkPackage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.PerkPackage");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::PerkPackage::get_ThirdPerkLevel() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
