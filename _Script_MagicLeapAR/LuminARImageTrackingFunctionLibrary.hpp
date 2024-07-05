#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARSessionConfig;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_MagicLeapAR {
struct LuminARCandidateImage;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminARImageTrackingFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_MagicLeapAR::LuminARCandidateImage* AddLuminRuntimeCandidateImageEx(_Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::Texture2D* CandidateTexture, void* FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, void* InAxisOrientation);
    _Script_MagicLeapAR::LuminARCandidateImage* AddLuminRuntimeCandidateImage(_Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::Texture2D* CandidateTexture, void* FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
}; // Size: 0x28
#pragma pack(pop)
}
