#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamInventoryUpdateHandle.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamInventoryUpdateHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamInventoryUpdateHandle");
    return result;
}
