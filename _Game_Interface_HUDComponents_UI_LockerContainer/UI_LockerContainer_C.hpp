#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_LockerContainer {
#pragma pack(push, 1)
struct UI_LockerContainer_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_OutOfBreath();
    _Script_UMG::WidgetAnimation*& get_ShowBreathBar();
    _Script_UMG::ProgressBar*& get_BreathBar();
    _Script_UMG::TextBlock*& get_BreathButton();
    _Script_UMG::TextBlock*& get_BreathTextPrefix();
    _Script_UMG::TextBlock*& get_BreathTextSuffix();
    _Script_UMG::Image*& get_Core1();
    _Script_UMG::Image*& get_Core2();
    _Script_UMG::TextBlock*& get_ExitButton();
    _Script_UMG::CanvasPanel*& get_ExitContainer();
    _Script_UMG::TextBlock*& get_ExitText();
    _Script_UMG::CanvasPanel*& get_HoldBreathContainer();
    _Script_UMG::Image*& get_Left1();
    _Script_UMG::Image*& get_Left2();
    _Script_UMG::Image*& get_LockerOutline();
    _Script_UMG::Image*& get_Right1();
    _Script_UMG::Image*& get_Right2();
    static _Script_CoreUObject::Class* static_class();
    void Localization();
    void* Get_BreathTextPrefix_Text_0();
    void SetBreathVisibility(bool MakeVisible);
    void OuttaBreath();
    void SetBreathTextVisibility(bool MakeVisible);
    void SetExitTextVisibility(bool Make_Visible);
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_LockerContainer(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
}
