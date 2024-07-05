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
struct ANetworkCharacter;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Interactable : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void Owner_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor);
    void Owner_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress);
    void Owner_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
    void Authority_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor);
    void Authority_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress);
    void Authority_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
}; // Size: 0x28
#pragma pack(pop)
}
