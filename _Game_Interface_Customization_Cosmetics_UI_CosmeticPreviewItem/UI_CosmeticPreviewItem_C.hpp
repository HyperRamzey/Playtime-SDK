#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticPreviewItem {
#pragma pack(push, 1)
struct UI_CosmeticPreviewItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_CosmeticPreviewButton();
    _Script_UMG::Image*& get_Thumbnail();
    _Script_UMG::Image*& get_ThumbnailBG();
    int32_t& get_Preview_Item_ID();
    void* get_OnHoveredPreviewItem();
    void* get_OnUnHoveredPreviewItem();
    void* get_OnReleasedPreviewItem();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__UI_CosmeticPreviewItem_CosmeticPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CosmeticPreviewItem_CosmeticPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CosmeticPreviewItem_CosmeticPreviewButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_CosmeticPreviewItem(int32_t EntryPoint);
    void OnReleasedPreviewItem__DelegateSignature(int32_t ItemId);
    void OnUnHoveredPreviewItem__DelegateSignature();
    void OnHoveredPreviewItem__DelegateSignature(int32_t ItemId);
}; // Size: 0x2b8
#pragma pack(pop)
}
