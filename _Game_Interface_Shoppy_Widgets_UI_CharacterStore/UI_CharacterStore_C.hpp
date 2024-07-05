#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
struct BP_MonsterAndPlayerMenuCharacter_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog {
struct UI_CosmeticCatalog_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltip {
struct UI_StoreTooltip_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_PurchaseButton {
struct UI_PurchaseButton_C;
}
namespace _Game_Interface_MainMenu_Widgets_UI_SubMenuButton {
struct UI_SubMenuButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CharacterStore {
#pragma pack(push, 1)
struct UI_CharacterStore_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::HorizontalBox*& get_CharacterSwitcher();
    _Script_UMG::Image*& get_CheekyButtonCover();
    _Script_UMG::Image*& get_Image_1015();
    _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C*& get_PlayCoinPurchase();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_RotateCharacterLeft();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_RotateCharacterRight();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_SwitchCharLeft();
    _Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& get_SwitchCharRight();
    _Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C*& get_TicketPurchase();
    _Script_UMG::Overlay*& get_TooltipContainer();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C*& get_UI_CosmeticCatalog();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C*& get_UI_StoreTooltip();
    int32_t& get_Cached_Play_Coin_Price();
    int32_t& get_Cached_Ticket_Price();
    void* get_CycleCharacterLeft();
    void* get_CycleCharacterRight();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_SurvivorMonsterDisplayObject();
    int32_t& get_CachedItemID();
    bool get_ViewingBundle();
    void set_ViewingBundle(bool value);
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_MonsterPlayerMenuCharacter();
    void* get_Active_Grid_Name();
    bool get_ViewingFeaturedItem();
    void set_ViewingFeaturedItem(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::SizeBox* CreateSizeBox(float MaxSize);
    void BndEvt__UI_CharacterStore_SwitchCharRight_K2Node_ComponentBoundEvent_5_ButtonRelease__DelegateSignature();
    void BndEvt__UI_CharacterStore_SwitchCharLeft_K2Node_ComponentBoundEvent_0_ButtonRelease__DelegateSignature();
    void BndEvt__UI_CharacterStore_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_1_ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId);
    void SwitchCharacterDisplay(void* NewType);
    void SetSelectedItem(int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID);
    void PrimeStoreForBundle(int32_t ItemId);
    void OnInitialized0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ResetRotation();
    void PrimeStore(void* CharacterType, int32_t ItemId, void* FeaturedTab, bool IsFeaturedItem_);
    void PrimeTooltip();
    void BndEvt__UI_CharacterStore_PlayCoinPurchase_K2Node_ComponentBoundEvent_15_ButtonReleased__DelegateSignature();
    void BndEvt__UI_CharacterStore_TicketPurchase_K2Node_ComponentBoundEvent_14_ButtonReleased__DelegateSignature();
    void HideTooltip();
    void GetTicketsFailure(void* ErrorMessage);
    void GetTickets(int32_t Playcoins, int32_t Tickets);
    void GetCoinsFailure(void* ErrorMessage);
    void GetPlaycoins(int32_t Playcoins, int32_t Tickets);
    void ExecuteUbergraph_UI_CharacterStore(int32_t EntryPoint);
    void CycleCharacterLeft__DelegateSignature();
    void CycleCharacterRight__DelegateSignature();
}; // Size: 0x320
#pragma pack(pop)
}
