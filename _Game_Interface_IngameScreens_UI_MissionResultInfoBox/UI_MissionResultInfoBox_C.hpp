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
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Throbber;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_MissionResultInfoBox {
#pragma pack(push, 1)
struct UI_MissionResultInfoBox_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Overlay*& get_ComplexInfo();
    _Script_UMG::TextBlock*& get_InfoLabel();
    _Script_UMG::Throbber*& get_LoadingProgress_Throbber();
    _Script_UMG::TextBlock*& get_RewardAmount();
    _Script_UMG::TextBlock*& get_SimpleInfo();
    _Script_UMG::Image*& get_TicketIcon();
    _Script_UMG::TextBlock*& get_XPLabel();
    bool get_UseTicketIcon();
    void set_UseTicketIcon(bool value);
    int32_t& get_Amount();
    void* get_InfoText();
    bool get_isSimple();
    void set_isSimple(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateData(int32_t Amount);
    void PreConstruct0(bool IsDesignTime);
    void SetXPDoubled(bool isXPDoubled);
    void UpdateText(void* InfoText);
    void ExecuteUbergraph_UI_MissionResultInfoBox(int32_t EntryPoint);
}; // Size: 0x2d0
#pragma pack(pop)
}
