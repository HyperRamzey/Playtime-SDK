#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MatchMaking_UI_LobbyPlayer {
#pragma pack(push, 1)
struct UI_LobbyPlayer_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_PlayerImage();
    _Script_UMG::TextBlock*& get_T_PlayerName();
    void* get_PlayerName();
    bool get_Host();
    void set_Host(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_LobbyPlayer(int32_t EntryPoint);
}; // Size: 0x2a0
#pragma pack(pop)
}
