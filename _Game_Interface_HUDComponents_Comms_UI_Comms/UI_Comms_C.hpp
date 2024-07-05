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
namespace _Game_Interface_HUDComponents_Comms_UI_CommsSlot {
struct UI_CommsSlot_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
struct UI_N_RadialProgressBar_C;
}
namespace _Game_Interface_HUDComponents_Comms_UI_Comms {
#pragma pack(push, 1)
struct UI_Comms_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Timeout();
    _Script_UMG::WidgetAnimation*& get_Disable();
    _Script_UMG::WidgetAnimation*& get_Open();
    _Script_UMG::Button*& get_Button_90();
    _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& get_CautionComm();
    _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& get_HelpComm();
    _Script_UMG::Image*& get_Image_33();
    _Script_UMG::Image*& get_Image_156();
    _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& get_NoComm();
    _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& get_RegroupComm();
    _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& get_UI_N_RadialProgressBar();
    _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C*& get_YesComm();
    void* get_AutoHideTimer();
    bool get_isShowing();
    void set_isShowing(bool value);
    bool get_bIsDisabled();
    void set_bIsDisabled(bool value);
    void* get_DisableTimer();
    void* get_Slots();
    int32_t& get_Selected();
    void* get_FiredComm();
    static _Script_CoreUObject::Class* static_class();
    void DisableComms();
    void EnableComms();
    void PreConstruct0(bool IsDesignTime);
    void SetSelected(int32_t Selected);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_EmoteHolder_Button_90_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void HideComms();
    void ShowComms();
    void Construct0();
    void ExecuteUbergraph_UI_Comms(int32_t EntryPoint);
    void FiredComm__DelegateSignature(int32_t Comm);
}; // Size: 0x308
#pragma pack(pop)
}
