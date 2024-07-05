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
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab {
#pragma pack(push, 1)
struct UI_CosmeticCatalogTab_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Button*& get_Button_107();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_Notification();
    void* get_ButtonRelease();
    _Script_Engine::Texture2D*& get_IconImage();
    void* get_Cosmetic_Type();
    void* get_SoundPackType();
    void* get_ItemType();
    bool get_Is_Active();
    void set_Is_Active(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_CosmeticCatalogTab_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ActivateTab();
    void DeactivateTab();
    void ShowNotification();
    void HideNotification();
    void BndEvt__UI_CosmeticCatalogTab_Button_107_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CosmeticCatalogTab_Button_107_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_CosmeticCatalogTab(int32_t EntryPoint);
    void ButtonRelease__DelegateSignature(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ObjectReference, void* ItemType, void* CosmeticType, void* SoundPackType);
}; // Size: 0x2b0
#pragma pack(pop)
}
