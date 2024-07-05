#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameMode.hpp"
namespace _Script_MagicLeapSharedWorld {
struct MagicLeapSharedWorldPlayerController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapSharedWorld {
struct MagicLeapSharedWorldSharedData;
}
namespace _Script_MagicLeapSharedWorld {
#pragma pack(push, 1)
struct MagicLeapSharedWorldGameMode : public _Script_Engine::GameMode {
    private: char pad_308[0xd0]; public:
    void* get_SharedWorldData();
    void* get_OnNewLocalDataFromClients();
    float& get_PinSelectionConfidenceThreshold();
    _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController*& get_ChosenOne();
    static _Script_CoreUObject::Class* static_class();
    bool SendSharedWorldDataToClients();
    void SelectChosenOne();
    void DetermineSharedWorldData(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldSharedData& NewSharedWorldData);
}; // Size: 0x3d8
#pragma pack(pop)
}
