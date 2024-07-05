#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EndGameResultCallback.hpp"
void* _Script_SteamCore::EndGameResultCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::EndGameResultCallback::get_UniqueGameID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::EndGameResultCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.EndGameResultCallback");
    return result;
}
