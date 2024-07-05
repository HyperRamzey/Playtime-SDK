#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_SlateCore\FocusEvent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_UMG\EventReply.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct MultiLineEditableTextBox;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Chat_UI_Chat {
#pragma pack(push, 1)
struct UI_Chat_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x78]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Timeout();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::ScrollBox*& get_Content();
    _Script_UMG::Image*& get_Image_86();
    _Script_UMG::TextBlock*& get_Length();
    _Script_UMG::ProgressBar*& get_ProgressBar_316();
    _Script_UMG::CanvasPanel*& get_Root();
    _Script_UMG::Button*& get_SwearBox();
    _Script_UMG::MultiLineEditableTextBox*& get_TextEntry();
    _Script_UMG::Overlay*& get_TypeBox();
    _Script_UMG::Image*& get_WidgetBlocker();
    bool get_Ready();
    void set_Ready(bool value);
    int32_t& get_MaxCharacters();
    bool get_CanSend();
    void set_CanSend(bool value);
    void* get_TimeoutTimer();
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::EventReply OnPreviewKeyDown0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent);
    void CheckProfanity();
    void UpdateLength();
    void ReceiveMessage(void* SenderName, void* Comm, void* Location, _Script_AdvancedSessions::BPUniqueNetId SenderID);
    void ReadyType(bool Condition);
    void Construct0();
    void OnFocusLost0(_Script_SlateCore::FocusEvent InFocusEvent);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ResetTimeout();
    void HideSelf();
    void Event_Update_Length();
    void BndEvt__UI_Chat_TextEntry_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(void*& Text);
    void MessageCommited(void* Text, void* Commit_Method);
    void Update_Chat_Visibility();
    void ExecuteUbergraph_UI_Chat(int32_t EntryPoint);
}; // Size: 0x2d8
#pragma pack(pop)
}
