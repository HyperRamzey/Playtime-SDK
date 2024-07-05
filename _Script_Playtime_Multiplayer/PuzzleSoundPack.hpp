#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundPack.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleSoundPack : public SoundPack {
    private: char pad_40[0xf8]; public:
    _Script_Engine::SoundBase*& get_Complete();
    _Script_Engine::SoundBase*& get_ReflexTicking();
    _Script_Engine::SoundBase*& get_ReflexCorrectButton();
    _Script_Engine::SoundBase*& get_ReflexFailure();
    _Script_Engine::SoundBase*& get_ReflexComplete();
    _Script_Engine::SoundBase*& get_MemoryRandomizing();
    _Script_Engine::SoundBase*& get_MemoryCorrectButton();
    _Script_Engine::SoundBase*& get_MemoryFailure();
    _Script_Engine::SoundBase*& get_MemoryComplete();
    _Script_Engine::SoundBase*& get_PianoC();
    _Script_Engine::SoundBase*& get_PianoD();
    _Script_Engine::SoundBase*& get_PianoE();
    _Script_Engine::SoundBase*& get_PianoF();
    _Script_Engine::SoundBase*& get_PianoG();
    _Script_Engine::SoundBase*& get_PianoComplete();
    _Script_Engine::SoundBase*& get_PianoFailure();
    _Script_Engine::SoundBase*& get_MazeBallRolling();
    _Script_Engine::SoundBase*& get_MazeLedLightingUp();
    _Script_Engine::SoundBase*& get_MazeHalfComplete();
    _Script_Engine::SoundBase*& get_MazeFullyComplete();
    _Script_Engine::SoundBase*& get_MazeFailure();
    _Script_Engine::SoundBase*& get_MazeHitWall();
    _Script_Engine::SoundBase*& get_MazeRotation();
    _Script_Engine::SoundBase*& get_ClawDrop();
    _Script_Engine::SoundBase*& get_ClawFinalImage();
    _Script_Engine::SoundBase*& get_ClawGrab();
    _Script_Engine::SoundBase*& get_ClawMoveLoop();
    _Script_Engine::SoundBase*& get_ClawMove();
    _Script_Engine::SoundBase*& get_ClawRandomize();
    _Script_Engine::SoundBase*& get_ClawFailure();
    _Script_Engine::SoundBase*& get_ClawComplete();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
