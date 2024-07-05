#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ToyPartData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ToyPartData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ToyPartData");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::ToyPartData::get_ToyPartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::ToyPartData::get_ToyTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
