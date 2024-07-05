#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamAuthComponentModuleInterface.hpp"
#include "..\_Script_PacketHandler\HandlerComponentFactory.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemSteam::SteamAuthComponentModuleInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
    return result;
}
