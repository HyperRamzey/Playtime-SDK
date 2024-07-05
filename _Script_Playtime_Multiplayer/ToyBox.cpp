#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "ToyBox.hpp"
int32_t& _Script_Playtime_Multiplayer::ToyBox::get_Price() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::ToyBox::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ToyBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ToyBox");
    return result;
}
void* _Script_Playtime_Multiplayer::ToyBox::get_Rarity() {
    return (void*)((uintptr_t)this + 0x24);
}
