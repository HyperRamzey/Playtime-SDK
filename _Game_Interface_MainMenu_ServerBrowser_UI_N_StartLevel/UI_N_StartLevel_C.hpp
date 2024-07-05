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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_N_StartLevel {
#pragma pack(push, 1)
struct UI_N_StartLevel_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_58();
    _Script_UMG::Image*& get_Check();
    _Script_UMG::Image*& get_Image_88();
    _Script_UMG::Image*& get_Image_172();
    _Script_UMG::TextBlock*& get_showdev();
    _Script_UMG::TextBlock*& get_Subtitle();
    bool get_Selected();
    void set_Selected(bool value);
    int32_t& get_Level();
    static _Script_CoreUObject::Class* static_class();
    void SetSelected(bool Selected);
    void BndEvt__UI_N_StartLevel_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct0();
    void ExecuteUbergraph_UI_N_StartLevel(int32_t EntryPoint);
}; // Size: 0x2a0
#pragma pack(pop)
}
