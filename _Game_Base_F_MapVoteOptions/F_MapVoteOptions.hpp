#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_F_MapVoteOptions {
#pragma pack(push, 1)
struct F_MapVoteOptions {
    private: char pad_0[0x18]; public:
    void* get_MapA_26_8A2DB59041BBF470AB17EBB38C1FDE27();
    void* get_MapB_27_956A1A2F43FCDBEDA73912BC9912A5DF();
    void* get_Random_28_05A9F4544B0C2526DC59D3B4ED7E7C66();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
