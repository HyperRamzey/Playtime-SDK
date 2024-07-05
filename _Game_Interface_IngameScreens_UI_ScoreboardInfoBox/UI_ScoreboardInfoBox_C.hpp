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
struct CanvasPanel;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_ScoreboardInfoBox {
#pragma pack(push, 1)
struct UI_ScoreboardInfoBox_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Avatar();
    _Script_UMG::Image*& get_AvatarBG();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_62();
    _Script_UMG::TextBlock*& get_FirstValue_Text();
    _Script_UMG::TextBlock*& get_PlayerName_Text();
    _Script_UMG::TextBlock*& get_SecondValue_Text();
    _Script_UMG::TextBlock*& get_ThirdValue_Text();
    bool get_UseTicketIcon();
    void set_UseTicketIcon(bool value);
    void* get_PlayerName();
    bool get_UseHeightOverride();
    void set_UseHeightOverride(bool value);
    float& get_HeightOverride();
    bool get_UseRGBAOverride();
    void set_UseRGBAOverride(bool value);
    void* get_RGBAOverride();
    int32_t& get_Value1();
    int32_t& get_Value2();
    int32_t& get_Value3();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void SetValues(void* PlayerName, int32_t Value1, int32_t Value2, int32_t Value3);
    void UpdateValues();
    void ExecuteUbergraph_UI_ScoreboardInfoBox(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
}
