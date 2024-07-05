#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid {
struct UI_CosmeticSelectionGrid_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton {
struct UI_CosmeticSlotButton_C;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorSelector {
struct UI_ColorSelector_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticItem {
struct UI_CosmeticItem_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ColorItem {
struct UI_ColorItem_C;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Appearance {
#pragma pack(push, 1)
struct UI_Appearance_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xf8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_BackButton();
    _Script_UMG::Overlay*& get_CosmeticSelectionGrid();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_grabpacks();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_hats();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_lefthands();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_masks();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_Pants();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_righthands();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_shirts();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_Shoes();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton::UI_CosmeticSlotButton_C*& get_Skins();
    _Game_Interface_Customization_Cosmetics_UI_ColorSelector::UI_ColorSelector_C*& get_UI_ColorSelector();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C*& get_UI_CosmeticSelectionGrid();
    _Script_UMG::UniformGridPanel*& get_UniformGridPanel_112();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_200();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C*& get_Previous_Caller();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Character();
    _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C*& get_CurrentColor();
    void* get_CharacterType();
    void* get_CosmeticType();
    void* get_ChangedAppearance();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_Menu_Player_Character();
    void* get_Appearance_HoveredItem();
    void* get_Appearance_UnhoveredItem();
    void* get_Appearance_RequestHideCosmeticInfo();
    void* get_Appearance_RequestTitleChange();
    static _Script_CoreUObject::Class* static_class();
    void SetCharacterType(void* NewValue);
    void SetMenuCharacter(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C* Menu_Character);
    void UpdateVisuals();
    void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_11_Grid_OnHovered__DelegateSignature(int32_t Item_ID);
    void BndEvt__UI_Appearance_BackButton_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_10_Grid_OnReleased__DelegateSignature(int32_t Item_ID, void* Type, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller, void* CosmeticFor);
    void BndEvt__UI_Appearance_lefthands_K2Node_ComponentBoundEvent_1_Released__DelegateSignature(void* Type);
    void PreConstruct0(bool IsDesignTime);
    void Back();
    void Construct0();
    void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_12_Grid_OnUnHovered__DelegateSignature(int32_t Item_ID);
    void SetColorMenuStatus(int32_t ItemId);
    void SwitchCategory(void* Type);
    void BndEvt__UI_Appearance_UI_CosmeticSelectionGrid_K2Node_ComponentBoundEvent_15_Grid_OnPopulate__DelegateSignature(int32_t Equipped_Item_ID);
    void PlaySelectAnimations();
    void BndEvt__UI_Appearance_masks_K2Node_ComponentBoundEvent_8_Released__DelegateSignature(void* Type);
    void BndEvt__UI_Appearance_shoes_K2Node_ComponentBoundEvent_7_Released__DelegateSignature(void* Type);
    void SetTypeAnimations(void* Cosmetic_Type);
    void BndEvt__UI_Appearance_hats_K2Node_ComponentBoundEvent_0_Released__DelegateSignature(void* Type);
    void BndEvt__UI_Appearance_skins_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(void* Type);
    void BndEvt__UI_Appearance_grabpacks_K2Node_ComponentBoundEvent_5_Released__DelegateSignature(void* Type);
    void BndEvt__UI_Appearance_pants_K2Node_ComponentBoundEvent_4_Released__DelegateSignature(void* Type);
    void BndEvt__UI_Appearance_shirts_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(void* Type);
    void BndEvt__UI_Appearance_righthands_K2Node_ComponentBoundEvent_2_Released__DelegateSignature(void* Type);
    void FoundInventory(void*& Inventory);
    void Failed(void* ErrorMessage);
    void SwitchToCosmetics();
    void BndEvt__UI_Appearance_UI_ColorSelector_K2Node_ComponentBoundEvent_12_ColorSelectedMenu__DelegateSignature(int32_t ColorIndex, _Game_Interface_Customization_Cosmetics_UI_ColorItem::UI_ColorItem_C* SelectedColor);
    void ExecuteUbergraph_UI_Appearance(int32_t EntryPoint);
    void Appearance_RequestTitleChange__DelegateSignature(void* Title);
    void Appearance_RequestHideCosmeticInfo__DelegateSignature();
    void Appearance_UnhoveredItem__DelegateSignature();
    void Appearance_HoveredItem__DelegateSignature(int32_t ID);
    void ChangedAppearance__DelegateSignature();
}; // Size: 0x358
#pragma pack(pop)
}
