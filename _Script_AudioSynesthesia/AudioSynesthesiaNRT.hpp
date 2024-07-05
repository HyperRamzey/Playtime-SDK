#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioAnalyzer\AudioAnalyzerNRT.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioSynesthesia {
#pragma pack(push, 1)
struct AudioSynesthesiaNRT : public _Script_AudioAnalyzer::AudioAnalyzerNRT {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
