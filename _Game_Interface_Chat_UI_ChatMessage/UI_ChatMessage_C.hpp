#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Chat_UI_ChatMessage {
#pragma pack(push, 1)
struct UI_ChatMessage_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::TextBlock*& get_PlayerName();
    _Script_UMG::TextBlock*& get_TextMessageComm();
    _Script_UMG::TextBlock*& get_TextMessageIn();
    _Script_UMG::TextBlock*& get_TextMessageLocation();
    void* get_SenderName();
    void* get_Comm();
    void* get_Location();
    void* get_SenderID();
    static _Script_CoreUObject::Class* static_class();
    void SetStyle();
    void Construct0();
    void ExecuteUbergraph_UI_ChatMessage(int32_t EntryPoint);
}; // Size: 0x2e0
#pragma pack(pop)
}
