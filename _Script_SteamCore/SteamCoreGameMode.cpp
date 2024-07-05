#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameMode.hpp"
#include "SteamCoreGameMode.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreGameMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreGameMode");
    return result;
}
