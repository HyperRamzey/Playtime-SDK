#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Interface_Content_UI_PlaytimeButton {
struct UI_PlaytimeButton_C;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo {
struct UI_CosmeticInfo_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Modals_UI_NewReward {
#pragma pack(push, 1)
struct UI_NewReward_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Popup();
    _Script_UMG::TextBlock*& get_From();
    _Script_UMG::Image*& get_Image_44();
    _Script_UMG::Image*& get_Image_113();
    _Script_UMG::TextBlock*& get_NewRewardText();
    _Script_UMG::Button*& get_NextButton();
    _Script_UMG::Overlay*& get_Overlay_93();
    _Script_UMG::Button*& get_PreviousButton();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C*& get_UI_CosmeticInfo();
    _Game_Interface_Content_UI_PlaytimeButton::UI_PlaytimeButton_C*& get_UI_PlaytimeButton();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_0();
    void* get_ContinuePressed();
    int32_t& get_ItemId();
    void* get_Items();
    int32_t& get_Index();
    _Script_CoreUObject::Object*& get_Sender();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__UI_NewReward_NextButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_NewReward_PreviousButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void NewReward_UpdateVisuals();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void OnInitialized0();
    void BndEvt__UI_NewReward_UI_PlaytimeButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature();
    void ExecuteUbergraph_UI_NewReward(int32_t EntryPoint);
    void ContinuePressed__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
