#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteSlot {
struct UI_EmoteSlot_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteHolder {
#pragma pack(push, 1)
struct UI_EmoteHolder_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Timeout();
    _Script_UMG::WidgetAnimation*& get_Open();
    _Script_UMG::Button*& get_Button_90();
    _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& get_EmoteSlot1();
    _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& get_EmoteSlot2();
    _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& get_EmoteSlot3();
    _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& get_EmoteSlot4();
    _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& get_EmoteSlot5();
    _Script_UMG::Image*& get_Image_33();
    _Script_UMG::Image*& get_Image_156();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_UI_N_RadialProgressBar();
    int32_t& get_Selected();
    void* get_Slots();
    void* get_ClickedEmote();
    bool get_IsInGame();
    void set_IsInGame(bool value);
    void* get_AutoHideTimer();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void EmoteHolder_Show(_Script_Playtime_Multiplayer::CustomizationSaveGame* SaveGame, void* Character, bool LongTimeout);
    void Hide();
    void SetSelected(int32_t Selected);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_EmoteHolder_Button_90_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void HideNoCallback();
    void ExecuteUbergraph_UI_EmoteHolder(int32_t EntryPoint);
    void ClickedEmote__DelegateSignature(int32_t Index);
}; // Size: 0x2f8
#pragma pack(pop)
}
