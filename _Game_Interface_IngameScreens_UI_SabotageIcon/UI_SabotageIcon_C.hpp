#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_SabotageIcon {
#pragma pack(push, 1)
struct UI_SabotageIcon_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeAllOut();
    _Script_UMG::WidgetAnimation*& get_FadeIconIn();
    _Script_UMG::WidgetAnimation*& get_FadeTimeIn();
    _Script_UMG::Image*& get_SabotageEffectBox();
    _Script_UMG::Image*& get_SabotIcon();
    _Script_UMG::TextBlock*& get_SabotTime();
    static _Script_CoreUObject::Class* static_class();
    void SetSabotageIcon(_Script_Playtime_Multiplayer::SabotageDef SabotageDef);
    void ExecuteUbergraph_UI_SabotageIcon(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
