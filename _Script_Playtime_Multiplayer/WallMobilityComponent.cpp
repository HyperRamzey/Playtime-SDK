#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "WallMobilityComponent.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::WallMobilityComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.WallMobilityComponent");
    return result;
}
