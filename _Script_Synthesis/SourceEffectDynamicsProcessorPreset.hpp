#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct SourceEffectDynamicsProcessorSettings;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SourceEffectDynamicsProcessorPreset : public _Script_Engine::SoundEffectSourcePreset {
    private: char pad_68[0x78]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_Synthesis::SourceEffectDynamicsProcessorSettings& InSettings);
}; // Size: 0xe0
#pragma pack(pop)
}
