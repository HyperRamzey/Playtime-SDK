#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Playtime_Multiplayer {
struct ANetworkFist;
}
namespace _Script_Playtime_Multiplayer {
struct NetworkRope;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct UFistRigPackageComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x68]; public:
    _Script_Playtime_Multiplayer::ANetworkFist*& get_NetworkFist();
    _Script_Playtime_Multiplayer::NetworkRope*& get_NetworkRope();
    _Script_Engine::SpringArmComponent*& get_SpringArm();
    _Script_Engine::StaticMeshComponent*& get_SM_LauncherGun();
    _Script_Engine::SkeletalMeshComponent*& get_SK_Fist();
    _Script_Engine::SceneComponent*& get_FistSpawn();
    void* get_SpawnScale();
    bool get_bExtended();
    void set_bExtended(bool value);
    void* get_NetworkFistClass();
    void* get_NetworkRopeClass();
    void* get_PlayerTraceChannel();
    void* get_FistStateChanged();
    static _Script_CoreUObject::Class* static_class();
    void Server_TryExtendHand(_Script_CoreUObject::Vector Direction);
    void Server_TryDetachAndRetractHand();
    void Server_StartRetractBackwards();
    void Server_BroadcastFistStateChange(void* State);
    void OnRep_NetworkFist();
    void Multicast_TryExtendHand(_Script_CoreUObject::Vector Direction);
    void Multicast_TryDetachAndRetractHand();
    void Multicast_StartRetractBackwards();
    void Multicast_ExtensionIsComplete();
    void Multicast_BroadcastFistStateChange(void* State);
}; // Size: 0x118
#pragma pack(pop)
}
