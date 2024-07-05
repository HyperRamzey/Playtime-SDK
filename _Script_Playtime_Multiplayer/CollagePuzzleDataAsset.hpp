#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CollagePuzzleDataAsset : public _Script_Engine::DataAsset {
    private: char pad_30[0x40]; public:
    float& get_IndividualRotateDuration();
    float& get_IndividualPoppingOutDuration();
    float& get_FullShuffleRotateDuration();
    float& get_FullShufflePoppingOutDuration();
    void* get_Materials();
    void* get_Meshes();
    _Script_Engine::MaterialInterface*& get_ShutDownMat();
    _Script_Engine::MaterialInterface*& get_SolvedMat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
