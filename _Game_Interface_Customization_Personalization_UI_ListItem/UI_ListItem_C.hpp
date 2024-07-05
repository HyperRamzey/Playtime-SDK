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
namespace _Game_Interface_Customization_Personalization_UI_ListItem {
#pragma pack(push, 1)
struct UI_ListItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_CheckBox();
    _Script_UMG::TextBlock*& get_DisplayName();
    _Script_UMG::Button*& get_ScreenPreviewHover();
    void* get_Name();
    void* get_ScreenItemHovered();
    void* get_ScreenItemUnHovered();
    void* get_ScreenItemSelected();
    int32_t& get_MyID();
    bool get_IsEquipped();
    void set_IsEquipped(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ScreenItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void SetSelected(bool Selected);
    void BndEvt__UI_ListItem_ScreenPreviewHover_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ListItem(int32_t EntryPoint);
    void ScreenItemSelected__DelegateSignature(int32_t ID);
    void ScreenItemUnHovered__DelegateSignature();
    void ScreenItemHovered__DelegateSignature();
}; // Size: 0x2d0
#pragma pack(pop)
}
