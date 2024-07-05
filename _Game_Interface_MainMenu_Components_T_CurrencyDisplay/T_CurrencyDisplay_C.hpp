#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_SteamCore {
struct SteamItemDetails;
}
namespace _Game_Interface_MainMenu_Widgets_UI_SubMenuButton {
struct UI_SubMenuButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Components_T_CurrencyDisplay {
#pragma pack(push, 1)
struct T_CurrencyDisplay_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x78]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Image*& get_Background_1();
    _Script_UMG::Overlay*& get_PlayCoinCountDisplay();
    _Script_UMG::Overlay*& get_PlayCoinCountDisplay_1();
    _Script_UMG::Image*& get_PlaycoinImage();
    _Script_UMG::Image*& get_PlaycoinImage_1();
    _Script_UMG::TextBlock*& get_PlaycoinsCount();
    _Script_UMG::TextBlock*& get_TicketsCount();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_UI_SubMenuButton();
    void* get_Inventory_Handle();
    void* get_Steam_Inventory();
    bool get_LoadedInventory();
    void set_LoadedInventory(bool value);
    int32_t& get_Coins();
    bool get_Waiting();
    void set_Waiting(bool value);
    bool get_ShouldHideCoins();
    void set_ShouldHideCoins(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateCoins(int32_t NewTotal);
    bool BeforeDec15();
    bool HasHazmatSuit(void*& SteamItems, _Script_SteamCore::SteamItemDetails& ItemDefinition);
    void Refresh();
    void OnInitialized0();
    void GetPlaycoinsAndTickets(int32_t Playcoins, int32_t Tickets);
    void FailWallet(void* ErrorMessage);
    void SetPlaycoinsVisible(bool ShouldHideCoins);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void BndEvt__T_CurrencyDisplay_UI_SubMenuButton_K2Node_ComponentBoundEvent_0_ButtonRelease__DelegateSignature();
    void ExecuteUbergraph_T_CurrencyDisplay(int32_t EntryPoint);
}; // Size: 0x2d8
#pragma pack(pop)
}
