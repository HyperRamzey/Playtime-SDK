#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\GameState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapSharedWorld {
#pragma pack(push, 1)
struct MagicLeapSharedWorldGameState : public _Script_Engine::GameState {
    private: char pad_290[0x40]; public:
    void* get_SharedWorldData();
    void* get_AlignmentTransforms();
    void* get_OnSharedWorldDataUpdated();
    void* get_OnAlignmentTransformsUpdated();
    static _Script_CoreUObject::Class* static_class();
    void OnReplicate_SharedWorldData();
    void OnReplicate_AlignmentTransforms();
    _Script_CoreUObject::Transform CalculateXRCameraRootTransform();
}; // Size: 0x2d0
#pragma pack(pop)
}
