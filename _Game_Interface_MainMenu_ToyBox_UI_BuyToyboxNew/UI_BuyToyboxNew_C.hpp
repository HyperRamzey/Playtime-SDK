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
namespace _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins {
struct UI_BuyPlaycoins_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
struct UI_EarlyAccess_Overlay_C;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox {
struct UI_PreviewToyBox_C;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain {
struct UI_ToyBoxMain_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_BuyToyboxNew {
#pragma pack(push, 1)
struct UI_BuyToyboxNew_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x180]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Transition_Backward();
    _Script_UMG::WidgetAnimation*& get_Transition();
    _Script_UMG::WidgetAnimation*& get_Purchase();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Image*& get_blackBG();
    _Script_UMG::Button*& get_Buy25TiersButton();
    _Script_UMG::Button*& get_BuyAndUnlockButton();
    _Script_UMG::Button*& get_BuyButton();
    _Script_UMG::CanvasPanel*& get_Buying();
    _Script_UMG::Button*& get_BuyTheToyBox();
    _Script_UMG::Image*& get_Image();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_69();
    _Script_UMG::Image*& get_Image_102();
    _Script_UMG::Image*& get_Image_110();
    _Script_UMG::Image*& get_Image_291();
    _Script_UMG::CanvasPanel*& get_Info();
    _Script_UMG::Button*& get_InfoButton();
    _Script_UMG::Overlay*& get_LoadingScreen();
    _Script_UMG::Overlay*& get_Main();
    _Script_UMG::WidgetSwitcher*& get_MasterWidgetSwitcher();
    _Script_UMG::Overlay*& get_Overlay_69();
    _Script_UMG::TextBlock*& get_premiumrewardsinfo();
    _Script_UMG::TextBlock*& get_PurchaseConfirmText();
    _Script_UMG::TextBlock*& get_TextBlock_81();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C*& get_UI_BuyPlaycoins();
    _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& get_UI_EarlyAccess_Overlay();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading_126();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox::UI_PreviewToyBox_C*& get_UI_Preview25ToyBox();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox::UI_PreviewToyBox_C*& get_UI_PreviewToyBox();
    _Script_UMG::WidgetSwitcher*& get_Widgets();
    int32_t& get_BundleToBuy();
    bool get_BuyingTiersToo();
    void set_BuyingTiersToo(bool value);
    _Game_Interface_MainMenu_ToyBox_UI_ToyBoxMain::UI_ToyBoxMain_C*& get_Parent();
    float& get_TimeoutAfter();
    bool get_InMainPage();
    void set_InMainPage(bool value);
    _Script_UMG::Widget*& get_DesiredWidget();
    void* get_TimeoutHandler();
    bool get_DoingCharge();
    void set_DoingCharge(bool value);
    bool get_FromBuy25TiersButton();
    void set_FromBuy25TiersButton(bool value);
    bool get_IsInPlaycoinsScreen();
    void set_IsInPlaycoinsScreen(bool value);
    void* get_PostChargeCorrelation();
    void* get_ToyboxCorrelation();
    void* get_RewardCorrelation();
    static _Script_CoreUObject::Class* static_class();
    void SequenceEvent__ENTRYPOINTUI_BuyToyboxNew_1(_Script_UMG::WidgetSwitcher* Widgets);
    void SequenceEvent__ENTRYPOINTUI_BuyToyboxNew_0(_Script_UMG::WidgetSwitcher* Widgets);
    void Name_Array_To_Verticle_Text_List(void*& Text, void*& Final_Text);
    void* Get_PremiumDescription_1_Text_0();
    void* Get_PremiumDescription_Text_0();
    void* GetText_0();
    void* Get_PurchaseConfirmText_Text_0();
    void CheckHasEnoughCoinsForSoloPurchaseOf25Tiers(void*& Array, bool& Enough_);
    void CheckHasEnoughCoins(void*& Array, bool& Enough_);
    void ShowTransactionScreen(bool Condition);
    void Widgets_SwitchToDesiredWidget(_Script_UMG::WidgetSwitcher* Widgets);
    void Construct0();
    void BuyBattlePass();
    void BndEvt__UI_BuyBattlePass_BuyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BuyBattlePass_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
    void BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BuyBattlePass_Button_84_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BuyBattlePass_InfoButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void TransitionToDesiredWidget(_Script_UMG::Widget* DesiredWidget, bool UseBackward);
    void OnTimeout();
    void RemoveFromParentIfChargeDone();
    void RunLocalGetRewards();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_BuyBattlePass_BuyAndUnlockButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void SayYesTo25Tiers();
    void BuyToyBoxSuccess();
    void BackendFailure(void* ErrorMessage);
    void GotRewards(void*& Ints);
    void FailedRewards(void* ErrorMessage);
    void BoughtLevels();
    void FailedToBuyLevels(void* ErrorMessage);
    void ToyboxFail(void* ErrorMessage);
    void Update_Localization();
    void ExecuteUbergraph_UI_BuyToyboxNew(int32_t EntryPoint);
}; // Size: 0x3e0
#pragma pack(pop)
}
