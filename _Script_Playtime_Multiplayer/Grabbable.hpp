#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Grabbable : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    bool QueryParameter(void* Param);
    void Pull(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    _Script_Engine::AnimSequence* GetHandPose();
    void Detach(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    bool CanAcceptHand(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    void Attach(_Script_Playtime_Multiplayer::ANetworkHand* Hand);
    void AdjustAttachPoint(_Script_CoreUObject::Transform& Point);
}; // Size: 0x28
#pragma pack(pop)
}
