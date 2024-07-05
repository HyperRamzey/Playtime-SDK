#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_Shoppy_Widgets_UI_FeaturedItems {
struct UI_FeaturedItems_C;
}
namespace _Game_Interface_General_UI_HeaderButton {
struct UI_HeaderButton_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CharacterStore {
struct UI_CharacterStore_C;
}
namespace _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins {
struct UI_BuyPlaycoins_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_SelectCharacter {
struct UI_SelectCharacter_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_BundleInfo {
struct UI_BundleInfo_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
struct BP_MonsterAndPlayerMenuCharacter_C;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_Interface_Shoppy_Widgets_UI_Store {
#pragma pack(push, 1)
struct UI_Store_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& get_CharactersButton();
    _Script_UMG::Overlay*& get_Empty();
    _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& get_FeaturedButton();
    _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& get_PlayCoinsButton();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C*& get_UI_BuyPlaycoins();
    _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C*& get_UI_CharacterStore();
    _Game_Interface_Shoppy_Widgets_UI_FeaturedItems::UI_FeaturedItems_C*& get_UI_FeaturedItems();
    _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C*& get_UI_SelectCharacter();
    _Game_Interface_Shoppy_Widgets_UI_BundleInfo::UI_BundleInfo_C*& get_UI_TeaserNotification();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_58();
    int32_t& get_SubMenuLevel();
    void* get_BackReleased();
    void* get_SelectedCharacter();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_CosmeticDisplay();
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_CameraMover();
    _Game_Interface_General_UI_HeaderButton::UI_HeaderButton_C*& get_CurrentButton();
    static _Script_CoreUObject::Class* static_class();
    void OnLoaded_DA108EDD411F86110CC4FCAEF1781C9D(_Script_CoreUObject::Object* Loaded);
    void BndEvt__UI_Store_PlayCoinsTab_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__UI_Store_DailyOffersTab_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__UI_Store_FeaturedTab_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void SetActiveTab(_Script_UMG::Widget* PageToOpen);
    void BndEvt__UI_Store_UI_BackButton_K2Node_ComponentBoundEvent_6_Released__DelegateSignature();
    void OnInitialized0();
    void BndEvt__UI_Store_UI_CharacterStore_K2Node_ComponentBoundEvent_2_CycleCharacterRight__DelegateSignature();
    void BndEvt__UI_Store_UI_CharacterStore_K2Node_ComponentBoundEvent_7_CycleCharacterLeft__DelegateSignature();
    void BindEvents();
    void SetFeatured();
    void LoadCosmeticDisplay(void* Character_Type, bool isFeaturedPage_);
    void OpenStore();
    void BndEvt__UI_Store_UI_SelectCharacter_K2Node_ComponentBoundEvent_8_SpecialistSelected__DelegateSignature();
    void BndEvt__UI_Store_UI_SelectCharacter_K2Node_ComponentBoundEvent_9_MonsterSelected__DelegateSignature();
    void SetPlaycoins();
    void SetCharacters();
    void BndEvt__UI_Store_UI_FeaturedItems_K2Node_ComponentBoundEvent_4_OnFeaturedItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID);
    void BndEvt__UI_Store_UI_TeaserNotification_K2Node_ComponentBoundEvent_5_CloseTeaser__DelegateSignature();
    void Hide_BundleInfo();
    void BndEvt__UI_Store_UI_FeaturedItems_K2Node_ComponentBoundEvent_10_ShowBundleInfo__DelegateSignature();
    void BndEvt__UI_Store_UI_FeaturedItems_K2Node_ComponentBoundEvent_11_OnBundleSelected__DelegateSignature(int32_t BundleId);
    void ExecuteUbergraph_UI_Store(int32_t EntryPoint);
    void BackReleased__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
