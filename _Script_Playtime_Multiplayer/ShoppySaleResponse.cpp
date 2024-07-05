#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ShoppySaleResponse.hpp"
void* _Script_Playtime_Multiplayer::ShoppySaleResponse::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ShoppySaleResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ShoppySaleResponse");
    return result;
}
void* _Script_Playtime_Multiplayer::ShoppySaleResponse::get_StartTime() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Playtime_Multiplayer::ShoppySaleResponse::get_EndTime() {
    return (void*)((uintptr_t)this + 0x18);
}
