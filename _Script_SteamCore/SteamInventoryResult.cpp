#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamInventoryResult.hpp"
int32_t& _Script_SteamCore::SteamInventoryResult::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamInventoryResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamInventoryResult");
    return result;
}