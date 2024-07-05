#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
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
namespace _Game_Interface_MonsterHUDs_UI_MommyHUD {
#pragma pack(push, 1)
struct UI_MommyHUD_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Image*& get_Fader();
    _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& get_UI_MonsterHUD();
    _Script_Engine::Texture2D*& get_First_Ability_Image();
    _Script_Engine::Texture2D*& get_Second_Ability_Image();
    void* get_First_Ability_Text();
    void* get_Second_Ability_Text();
    void* get_In_Color();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void SetWebAmount(float Percent);
    void WebsOnCooldown();
    void WebsRecharged();
    void ExecuteUbergraph_UI_MommyHUD(int32_t EntryPoint);
}; // Size: 0x2d0
#pragma pack(pop)
}
