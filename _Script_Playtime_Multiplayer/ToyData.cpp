#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "ToyData.hpp"
void* _Script_Playtime_Multiplayer::ToyData::get_Assembled() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::ToyData::get_Carried() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::ToyData::get_Grounded() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ToyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ToyData");
    return result;
}
