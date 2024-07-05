#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser {
struct UI_MP_ServerBrowser_C;
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
namespace _Game_Interface_MainMenu_ServerBrowser_UI_N_ServerRow {
#pragma pack(push, 1)
struct UI_N_ServerRow_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x288]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_58();
    _Script_UMG::Image*& get_Image_172();
    _Script_UMG::TextBlock*& get_NameLabel();
    _Script_UMG::TextBlock*& get_PingLabel();
    _Script_UMG::TextBlock*& get_PopulationLabel();
    _Script_UMG::Image*& get_Thumb();
    bool get_Selected();
    void set_Selected(bool value);
    void* get_Session();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C*& get_Parent();
    int32_t& get_Level();
    void* get_SessionNEW();
    void* get_Ping();
    static _Script_CoreUObject::Class* static_class();
    void GetSessionSettingStringFromKey(void* Key, void*& Value);
    void SetStyle();
    void SetSelected(bool Selected);
    void Construct0();
    void BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_N_ServerRow(int32_t EntryPoint);
}; // Size: 0x4e8
#pragma pack(pop)
}
