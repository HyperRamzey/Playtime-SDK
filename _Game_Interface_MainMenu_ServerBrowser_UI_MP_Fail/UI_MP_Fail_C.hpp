#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton {
struct UI_MP_N_MenuButton_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_Fail {
#pragma pack(push, 1)
struct UI_MP_Fail_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button();
    _Script_UMG::TextBlock*& get_Label();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& get_Start();
    void* get_Text();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__UI_MP_Fail_Start_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller);
    void ExecuteUbergraph_UI_MP_Fail(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
