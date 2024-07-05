#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARCandidateImage : public _Script_Engine::DataAsset {
    private: char pad_30[0x28]; public:
    _Script_Engine::Texture2D*& get_CandidateTexture();
    void* get_FriendlyName();
    float& get_Width();
    float& get_Height();
    void* get_Orientation();
    static _Script_CoreUObject::Class* static_class();
    float GetPhysicalWidth();
    float GetPhysicalHeight();
    void* GetOrientation();
    void* GetFriendlyName();
    _Script_Engine::Texture2D* GetCandidateTexture();
}; // Size: 0x58
#pragma pack(pop)
}
