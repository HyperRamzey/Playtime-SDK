#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StoreAuthURLResponse.hpp"
void* _Script_SteamCore::StoreAuthURLResponse::get_URL() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::StoreAuthURLResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.StoreAuthURLResponse");
    return result;
}
