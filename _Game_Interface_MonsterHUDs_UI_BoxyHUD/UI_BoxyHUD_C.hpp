#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
struct UI_MonsterHUD_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MonsterHUDs_UI_BoxyHUD {
#pragma pack(push, 1)
struct UI_BoxyHUD_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Image*& get_Fader();
    _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& get_UI_MonsterHUD();
    _Script_Engine::Texture2D*& get_First_Ability_Image();
    _Script_Engine::Texture2D*& get_Second_Ability_Image();
    void* get_Second_Ability_Text();
    void* get_First_Ability_Text();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void SetChargeAmount(float Percent);
    void SetChargeColor(_Script_CoreUObject::LinearColor InColor);
    void ResetChargeColor();
    void ExecuteUbergraph_UI_BoxyHUD(int32_t EntryPoint);
}; // Size: 0x2c0
#pragma pack(pop)
}