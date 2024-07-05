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
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Matchmaking_UI_MapVoteItem {
#pragma pack(push, 1)
struct UI_MapVoteItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x100]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Selected();
    _Script_UMG::Button*& get_B_Map();
    _Script_UMG::Image*& get_BackgroundMask();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_ButtonFade();
    _Script_UMG::Image*& get_ButtonOverlay();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::Image*& get_CheckBox();
    _Script_UMG::Image*& get_checkmark();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_307();
    _Script_UMG::Overlay*& get_SelectedOverlay();
    _Script_UMG::TextBlock*& get_TextBlock_138();
    bool get_Highlighted();
    void set_Highlighted(bool value);
    void* get_Map();
    bool get_IsRandom();
    void set_IsRandom(bool value);
    void* get_OnPressed();
    bool get_CanVote();
    void set_CanVote(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Select();
    void ToggleHighlight(bool Highlight);
    void BndEvt__UI_MapVoteItem_B_Map_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void RateLimit();
    void Reconstruct();
    void Construct0();
    void BndEvt__UI_MapVoteItem_B_Map_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_MapVoteItem_B_Map_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_MapVoteItem(int32_t EntryPoint);
    void OnPressed__DelegateSignature();
}; // Size: 0x360
#pragma pack(pop)
}
