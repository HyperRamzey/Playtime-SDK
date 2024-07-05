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
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteHolder {
struct UI_EmoteHolder_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticItem {
struct UI_CosmeticItem_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_EmoteSelectionGrid {
struct UI_EmoteSelectionGrid_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Emotes {
#pragma pack(push, 1)
struct UI_Emotes_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x78]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_CategoryText();
    _Script_UMG::Overlay*& get_EmoteInfo();
    _Script_UMG::Image*& get_Gradient();
    _Script_UMG::TextBlock*& get_ItemName();
    _Script_UMG::TextBlock*& get_RarityText();
    _Script_UMG::TextBlock*& get_SlotText();
    _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& get_UI_EmoteHolder();
    _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& get_UI_EmoteHolder_1();
    _Game_Interface_Customization_Cosmetics_UI_EmoteSelectionGrid::UI_EmoteSelectionGrid_C*& get_UI_EmoteSelectionGrid_1();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C*& get_Caller();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Character();
    void* get_CharacterType();
    int32_t& get_Item_ID();
    void* get_Changed();
    static _Script_CoreUObject::Class* static_class();
    void* Get_CategoryText_Text_0();
    void SetCharacterType(void* NewValue);
    void UpdateVisuals();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature(int32_t Item_ID);
    void BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature(int32_t Item_ID, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller, void* CosmeticFor);
    void BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature(int32_t Index);
    void Construct0();
    void BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature(int32_t Item_ID);
    void EmotesUpdateVisuals();
    void GotInventory(void*& Inventory);
    void Failure(void* ErrorMessage);
    void ExecuteUbergraph_UI_Emotes(int32_t EntryPoint);
    void Changed__DelegateSignature();
}; // Size: 0x2d8
#pragma pack(pop)
}
