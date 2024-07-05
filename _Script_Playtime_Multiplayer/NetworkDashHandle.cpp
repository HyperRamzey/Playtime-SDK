#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "NetworkDashHandle.hpp"
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::NetworkDashHandle::get_RootScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::ArrowComponent*& _Script_Playtime_Multiplayer::NetworkDashHandle::get_FirstEdge() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::NetworkDashHandle::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::ArrowComponent*& _Script_Playtime_Multiplayer::NetworkDashHandle::get_SecondEdge() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkDashHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkDashHandle");
    return result;
}
_Script_Engine::ArrowComponent*& _Script_Playtime_Multiplayer::NetworkDashHandle::get_LowestLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x240);
}
