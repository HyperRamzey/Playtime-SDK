#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_AbilityComponent {
#pragma pack(push, 1)
struct UI_AbilityComponent_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_AbilityReady();
    _Script_UMG::WidgetAnimation*& get_AbilityRefill();
    _Script_UMG::Image*& get_AbilityIcon();
    _Script_UMG::Image*& get_AbilityOutline();
    _Script_UMG::ProgressBar*& get_AbilityProgressBar();
    _Script_UMG::TextBlock*& get_Label();
    float& get_Minimum();
    float& get_Maximum();
    float& get_Percent();
    void* get_Initial_Color();
    static _Script_CoreUObject::Class* static_class();
    void SetMappedPercent(float Percent);
    void DoRefill(float Time);
    void PreConstruct0(bool IsDesignTime);
    void ResetFillColorAndOpacity();
    void SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor);
    void SetAbilityFillColorAndOpacity(float InOpacity);
    void SetTextFillColorAndOpacity(float InOpacity);
    void AbilityRecharged();
    void SetAbilityIconScale(_Script_CoreUObject::Vector2D Scale);
    void ExecuteUbergraph_UI_AbilityComponent(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)
}
