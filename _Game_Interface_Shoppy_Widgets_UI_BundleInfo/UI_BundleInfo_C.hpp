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
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_BundleInfo {
#pragma pack(push, 1)
struct UI_BundleInfo_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BackgroundImage();
    _Script_UMG::Image*& get_BundleHeaderBG();
    _Script_UMG::Image*& get_BundleHeaderFrame();
    _Script_UMG::Image*& get_ButtonBG();
    _Script_UMG::Image*& get_ButtonFrame();
    _Script_UMG::Button*& get_closeButton();
    _Script_UMG::Image*& get_CloseIcon();
    _Script_UMG::Button*& get_ConfirmButton();
    _Script_UMG::Image*& get_Image_1015();
    _Script_UMG::Image*& get_SpaceObject();
    _Script_UMG::Image*& get_TeaserFrame();
    _Script_UMG::Image*& get_TeaserImageBG();
    _Script_UMG::TextBlock*& get_TextBlock_469();
    void* get_CloseTeaser();
    _Script_Engine::MaterialInstanceDynamic*& get_BundleInfoImage();
    _Script_Engine::Texture*& get_Image();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_TeaserNotification_Button_118_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_TeaserNotification_Button_118_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_TeaserNotification_Button_118_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BundleInfo_Button_56_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_BundleInfo_ConfirmButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BundleInfo_ConfirmButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BundleInfo(int32_t EntryPoint);
    void CloseTeaser__DelegateSignature();
}; // Size: 0x2f0
#pragma pack(pop)
}
