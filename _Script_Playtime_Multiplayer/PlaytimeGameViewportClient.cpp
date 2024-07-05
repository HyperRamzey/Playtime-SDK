#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameViewportClient.hpp"
#include "PlaytimeGameViewportClient.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeGameViewportClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeGameViewportClient");
    return result;
}
