#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TimecodeProvider.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkTimecodeProvider : public _Script_Engine::TimecodeProvider {
    private: char pad_30[0x90]; public:
    void* get_SubjectKey();
    void* get_Evaluation();
    bool get_bOverrideFrameRate();
    void set_bOverrideFrameRate(bool value);
    void* get_OverrideFrameRate();
    int32_t& get_BufferSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
