#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IPCountry.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::IPCountry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.IPCountry");
    return result;
}
