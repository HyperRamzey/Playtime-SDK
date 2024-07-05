#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
#include "SteamCoreSubsystem.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreSubsystem");
    return result;
}
