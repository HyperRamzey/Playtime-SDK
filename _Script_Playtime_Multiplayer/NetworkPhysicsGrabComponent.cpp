#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetworkPhysicsGrabComponent.hpp"
#include "UNetworkGrabComponent.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkPhysicsGrabComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkPhysicsGrabComponent");
    return result;
}
