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
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_Shoppy_UI_Shoppy {
struct UI_Shoppy_C;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_UI_ShopItem {
#pragma pack(push, 1)
struct UI_ShopItem_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Hover();
    _Script_UMG::WidgetAnimation*& get_Refresh();
    _Script_UMG::Image*& get_EventOverlay();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_72();
    _Script_UMG::Image*& get_Image_169();
    _Script_UMG::TextBlock*& get_ItemName();
    _Script_UMG::TextBlock*& get_Price();
    _Script_UMG::Button*& get_ShopItemButton();
    _Script_UMG::Overlay*& get_ShopItemContainer();
    _Script_UMG::Image*& get_Thumb();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    int32_t& get_Item();
    float& get_TimeoutAfter();
    _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C*& get_Parent();
    bool get_Big();
    void set_Big(bool value);
    bool get_LG_Thumb();
    void set_LG_Thumb(bool value);
    bool get_Finished();
    void set_Finished(bool value);
    bool get_Preset_Item();
    void set_Preset_Item(bool value);
    int32_t& get_Set_Item();
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_CameraManager();
    void* get_ShopItemReleased();
    static _Script_CoreUObject::Class* static_class();
    void SetParent(_Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C* Parent);
    void SetItem(int32_t Item);
    void Construct0();
    void BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_ShopItem_Button_71_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ShopItem(int32_t EntryPoint);
    void ShopItemReleased__DelegateSignature(int32_t ItemId);
}; // Size: 0x2f8
#pragma pack(pop)
}
