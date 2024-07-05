#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshComponent.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Playtime_Multiplayer {
struct CollagePuzzleDataAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CollagePuzzleTile : public _Script_Engine::StaticMeshComponent {
    private: char pad_4e0[0xe0]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    int32_t& get_MeshIndex();
    void* get_OnAnimationFinished();
    _Script_Engine::CurveFloat*& get_InOutCurve();
    _Script_Engine::CurveFloat*& get_RotationCurve();
    int32_t& get_TextureIndex();
    int32_t& get_CurrentRotation();
    int32_t& get_DesiredRotation();
    _Script_Playtime_Multiplayer::CollagePuzzleDataAsset*& get_DataAsset();
    static _Script_CoreUObject::Class* static_class();
    void TryStartRotation();
    void TimelineEnded();
    void Server_SetTextureIndex(int32_t Index);
    void RotationProgress(float Value);
    void OnRep_TextureIndex();
    void OnRep_DesiredRotation();
    bool IsCorrectPosition();
    void InOutProgress(float Value);
    bool HasFailed();
    void Authority_ResetTile();
    void Authority_RandomizeTile();
}; // Size: 0x5c0
#pragma pack(pop)
}
