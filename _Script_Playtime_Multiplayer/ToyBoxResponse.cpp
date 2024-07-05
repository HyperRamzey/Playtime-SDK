#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ToyBoxResponse.hpp"
void* _Script_Playtime_Multiplayer::ToyBoxResponse::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::ToyBoxResponse::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Playtime_Multiplayer::ToyBoxResponse::get_StartTime() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::ToyBoxResponse::get_EndTime() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::ToyBoxResponse::get_Items() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ToyBoxResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ToyBoxResponse");
    return result;
}
