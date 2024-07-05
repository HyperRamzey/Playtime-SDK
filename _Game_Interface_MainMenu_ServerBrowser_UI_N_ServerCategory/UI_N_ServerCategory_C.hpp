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
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerCategory {
#pragma pack(push, 1)
struct UI_N_ServerCategory_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_58();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_Image_172();
    _Script_UMG::TextBlock*& get_Label();
    _Script_Engine::Texture2D*& get_IconTexture();
    void* get_Text();
    bool get_Selected();
    void set_Selected(bool value);
    void* get_Category();
    void* get_Released();
    static _Script_CoreUObject::Class* static_class();
    void SetSelected(bool Selected);
    void Construct0();
    void BndEvt__UI_N_ServerCategory_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_N_ServerCategory(int32_t EntryPoint);
    void Released__DelegateSignature(void* Category);
}; // Size: 0x2c0
#pragma pack(pop)
}
