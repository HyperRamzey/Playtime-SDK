#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton_New {
struct UI_MP_N_MenuButton_New_C;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Game_Interface_Shoppy_UI_ShopItem {
struct UI_ShopItem_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Game_Interface_Shoppy_UI_Shoppy_Button {
struct UI_Shoppy_Button_C;
}
namespace _Game_Interface_Shoppy_UI_Shoppy_Preview {
struct UI_Shoppy_Preview_C;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
struct VaRestRequestJSON;
}
namespace _Game_Interface_Shoppy_UI_Shoppy {
#pragma pack(push, 1)
struct UI_Shoppy_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x120]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Overlay*& get_Clock();
    _Script_UMG::TextBlock*& get_ClockText();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& get_closeButton_1();
    _Script_UMG::Image*& get_EventSplash();
    _Script_UMG::UniformGridPanel*& get_HolidayGridItems();
    _Script_UMG::Image*& get_Image_112();
    _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& get_Item0();
    _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& get_Item1();
    _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& get_Item2();
    _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& get_Item3();
    _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& get_Item4();
    _Script_UMG::Image*& get_ItemLoading();
    _Script_UMG::HorizontalBox*& get_ItemPanel();
    _Script_UMG::HorizontalBox*& get_ItemPanel_Holiday();
    _Script_UMG::Overlay*& get_LoadOverlay();
    _Script_UMG::TextBlock*& get_PageTitle();
    _Script_UMG::CanvasPanel*& get_Shop();
    _Script_UMG::WidgetSwitcher*& get_ShopWidgetSwitcher();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C*& get_UI_Shoppy_Button_Event();
    _Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C*& get_UI_Shoppy_Button_Featured();
    _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C*& get_UI_Shoppy_Preview();
    void* get_TopButtons();
    void* get_API_DateTime();
    int32_t& get_TimeExposed();
    void* get_ShopStream();
    void* get_BackReleased();
    void* get_Date_Time_Object();
    bool get_NewVar_0();
    void set_NewVar_0(bool value);
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_CameraManager();
    static _Script_CoreUObject::Class* static_class();
    void GetTimeToDisplay(bool ShowEventTime, void*& Time);
    void FormatTime(_Script_CoreUObject::Timespan Timespan);
    void CacheStockParents();
    void Load_Items(void* EventName);
    void RandomlyRetrieveItems(void*& ShopItems);
    void SetThingsEnabled(bool bInIsEnabled);
    void CheckTime(bool ShowEventTime);
    void* GetFeaturedTimeLeft();
    int32_t GetSeedFromDateTime();
    void CacheTopButtons();
    void Construct0();
    void LoadItemsFor(void* Label);
    void LoadShop();
    void LoadSuccess(_Script_VaRest::VaRestRequestJSON* Request);
    void LoadFail(_Script_VaRest::VaRestRequestJSON* Request);
    void TimeUp();
    void BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller);
    void Refresh();
    void BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature();
    void LoadEventItems();
    void ShopItemSelected(int32_t ItemId);
    void CloseShoppyPreviewLoading();
    void CallCheckTime();
    void Update_Localization();
    void ExecuteUbergraph_UI_Shoppy(int32_t EntryPoint);
    void BackReleased__DelegateSignature();
}; // Size: 0x380
#pragma pack(pop)
}
