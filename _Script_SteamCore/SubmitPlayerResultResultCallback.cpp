#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmitPlayerResultResultCallback.hpp"
void* _Script_SteamCore::SubmitPlayerResultResultCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::SubmitPlayerResultResultCallback::get_UniqueGameID() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::SubmitPlayerResultResultCallback::get_SteamIDPlayer() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SteamCore::SubmitPlayerResultResultCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SubmitPlayerResultResultCallback");
    return result;
}
