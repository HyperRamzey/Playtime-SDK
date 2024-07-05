#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetDriver.hpp"
#include "SteamSocketsNetDriver.hpp"
_Script_CoreUObject::Class* _Script_SteamSockets::SteamSocketsNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamSockets.SteamSocketsNetDriver");
    return result;
}
