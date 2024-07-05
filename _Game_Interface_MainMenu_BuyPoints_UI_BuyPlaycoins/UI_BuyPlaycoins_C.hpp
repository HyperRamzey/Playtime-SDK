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
namespace _Script_VaRest {
struct VaRestRequestJSON;
}
namespace _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton {
struct UI_BuyPlaycoinsButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Script_SteamCore {
struct MicroTxnAuthorizationResponse;
}
namespace _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins {
#pragma pack(push, 1)
struct UI_BuyPlaycoins_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Purchase();
    _Script_UMG::WidgetAnimation*& get_Transaction();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::TextBlock*& get_NameText();
    _Script_UMG::TextBlock*& get_PurchaseConfirmText();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& get_Tier1BuyCoins();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& get_Tier2BuyCoins();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& get_Tier3BuyCoins();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& get_Tier4BuyCoins();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& get_Tier5BuyCoins();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    int32_t& get_BundleToBuy();
    void* get_Updated();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoinsButton::UI_BuyPlaycoinsButton_C*& get_CurrentPointsButton();
    bool get_RunningTransaction();
    void set_RunningTransaction(bool value);
    void* get_BuyButtons();
    void* get_TransactionInitCorrelationID();
    void* get_FinalizeTransactionID();
    static _Script_CoreUObject::Class* static_class();
    void* Get_PurchaseConfirmText_Text_0();
    void ShowTransactionScreen(bool Condition);
    void OnCallback_4E5A07CA479738E83DFA88B0AC9E0CC2(void* Data, bool bWasSuccessful);
    void Construct0();
    void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    void BndEvt__UI_BuyPoints_UI_N_BuyPointsButton_4_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    void Run();
    void OnEscapeInputCapture();
    void RefreshWidget();
    void InitFail(void* ErrorMessage);
    void InitSuccess();
    void MicroTransactionAuthorized(_Script_SteamCore::MicroTxnAuthorizationResponse& Data);
    void Erorr(void* ErrorMessage);
    void Complete();
    void Success(_Script_VaRest::VaRestRequestJSON* Request);
    void DoNothing(_Script_VaRest::VaRestRequestJSON* Request);
    void ExecuteUbergraph_UI_BuyPlaycoins(int32_t EntryPoint);
    void Updated__DelegateSignature();
}; // Size: 0x318
#pragma pack(pop)
}
