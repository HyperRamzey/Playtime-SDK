#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
struct LevelSequence;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithImportedSequencesActor : public _Script_Engine::Actor {
    private: char pad_220[0x10]; public:
    void* get_ImportedSequences();
    static _Script_CoreUObject::Class* static_class();
    void PlayLevelSequence(_Script_LevelSequence::LevelSequence* SequenceToPlay);
}; // Size: 0x230
#pragma pack(pop)
}
