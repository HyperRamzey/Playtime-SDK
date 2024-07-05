#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
#include "SteamCoreWebSubsystem.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebSubsystem");
    return result;
}
