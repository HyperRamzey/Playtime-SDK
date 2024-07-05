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
struct Button;
}
namespace _Script_UMG {
struct InvalidationBox;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid {
struct UI_CosmeticSelectionGrid_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticItem {
#pragma pack(push, 1)
struct UI_CosmeticItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x310]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Button*& get_CosmeticItemButton();
    _Script_UMG::InvalidationBox*& get_InvalidationBox_0();
    _Script_UMG::Image*& get_RarityBG();
    _Script_UMG::Image*& get_SelectedImage();
    _Script_UMG::Image*& get_Thumbnail();
    _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C*& get_Parent();
    int32_t& get_ItemId();
    void* get_Item_OnHovered();
    void* get_Item_OnUnhovered();
    void* get_Item_OnReleased();
    bool get_Equipped();
    void set_Equipped(bool value);
    void* get_DefaultStyle();
    void* get_SilentSound();
    static _Script_CoreUObject::Class* static_class();
    void UpdateEnabled();
    bool ShouldForceType(void*& Type);
    void BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Construct0();
    void SetEquipStatus(bool Status);
    void ExecuteUbergraph_UI_CosmeticItem(int32_t EntryPoint);
    void Item_OnReleased__DelegateSignature(int32_t Item_ID, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller);
    void Item_OnUnhovered__DelegateSignature(int32_t Item_ID);
    void Item_OnHovered__DelegateSignature(int32_t Item_ID);
}; // Size: 0x570
#pragma pack(pop)
}
