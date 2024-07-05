#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSharedWorldGameState : public _Script_Engine::GameState {
    private: char pad_290[0x38]; public:
    void* get_PreviewImageData();
    void* get_ARWorldData();
    int32_t& get_PreviewImageBytesTotal();
    int32_t& get_ARWorldBytesTotal();
    int32_t& get_PreviewImageBytesDelivered();
    int32_t& get_ARWorldBytesDelivered();
    static _Script_CoreUObject::Class* static_class();
    void K2_OnARWorldMapIsReady();
}; // Size: 0x2c8
#pragma pack(pop)
}
