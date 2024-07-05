#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_SubtitlesData_Simple_Subtitles {
#pragma pack(push, 1)
struct Simple_Subtitles {
    private: char pad_0[0x20]; public:
    float& get_StartTime_35_BB590E1B4CA94D0D43F20C813CCDA064();
    float& get_EndTime_38_7E09828344F1E5FF33A6B191C9FE521A();
    void* get_ENGLISH_26_BB5A0C14407BB0302149D58F7AD6B230();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
