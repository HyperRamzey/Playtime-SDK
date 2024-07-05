#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PuzzleBase.hpp"
namespace _Script_Playtime_Multiplayer {
struct CollagePuzzleDataAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Playtime_Multiplayer {
struct CollagePuzzleTile;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleCollage : public PuzzleBase {
    private: char pad_478[0x28]; public:
    _Script_Playtime_Multiplayer::CollagePuzzleDataAsset*& get_CollagePuzzleDataAsset();
    void* get_Tiles();
    static _Script_CoreUObject::Class* static_class();
    void Rotate(_Script_Playtime_Multiplayer::HandMagnetComponent* Magnet, _Script_Playtime_Multiplayer::CollagePuzzleTile* Tile);
    void PlaySolvedSound();
    void Authority_AnimFinished();
}; // Size: 0x4a0
#pragma pack(pop)
}
