#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Base_GS_Escape {
struct GS_Escape_C;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif {
struct UI_MP_Notif_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_UI_AskToBeMonster {
#pragma pack(push, 1)
struct UI_AskToBeMonster_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_TextBlock_53();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& get_UI_MP_Notif();
    _Game_Base_GS_Escape::GS_Escape_C*& get_GS_Escape();
    static _Script_CoreUObject::Class* static_class();
    void* GetTimeRemaing();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void Destruct0();
    void ExecuteUbergraph_UI_AskToBeMonster(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
