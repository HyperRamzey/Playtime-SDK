#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ShoppyItemResponseSet.hpp"
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_Sale() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_EndTime() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_SaleInfo() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ShoppyItemResponseSet");
    return result;
}
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_StartTime() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_Featured() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Playtime_Multiplayer::ShoppyItemResponseSet::get_Bundles() {
    return (void*)((uintptr_t)this + 0x60);
}
