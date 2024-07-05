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
struct TextBlock;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ScreenItem {
#pragma pack(push, 1)
struct UI_ScreenItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::TextBlock*& get_DisplayName();
    _Script_UMG::Button*& get_FavoriteButton();
    _Script_UMG::Image*& get_ScreenFavoritedImage();
    _Script_UMG::Button*& get_SelectButton();
    void* get_MyScreenName();
    void* get_ScreenItemHovered();
    void* get_ScreenItemUnHovered();
    void* get_ScreenItemSelected();
    int32_t& get_MyID();
    bool get_Equipped();
    void set_Equipped(bool value);
    bool get_Favorited();
    void set_Favorited(bool value);
    void* get_ScreenItemFavoritedPressed();
    void* get_Image();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ScreenItem_UpdateVisuals();
    void BndEvt__UI_ScreenItem_FavoriteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_ScreenItem_FavoriteButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ScreenItem_FavoriteButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void SetFavorited(bool Favorited);
    void SetEquipped(bool Equipped);
    void ExecuteUbergraph_UI_ScreenItem(int32_t EntryPoint);
    void ScreenItemFavoritedPressed__DelegateSignature(int32_t ID, _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Object);
    void ScreenItemSelected__DelegateSignature(_Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Screen, int32_t ScreenID);
    void ScreenItemUnHovered__DelegateSignature();
    void ScreenItemHovered__DelegateSignature(void* ScreenImage);
}; // Size: 0x318
#pragma pack(pop)
}
