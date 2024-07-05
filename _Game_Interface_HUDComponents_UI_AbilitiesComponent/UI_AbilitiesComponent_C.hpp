#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_HUDComponents_UI_AbilityComponent {
struct UI_AbilityComponent_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_MonsterHUDs_UI_SabotageComponent {
struct UI_SabotageComponent_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Game_Interface_HUDComponents_UI_AbilitiesComponent {
#pragma pack(push, 1)
struct UI_AbilitiesComponent_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C*& get_FirstAbility();
    _Script_UMG::Image*& get_Outline();
    _Game_Interface_HUDComponents_UI_AbilityComponent::UI_AbilityComponent_C*& get_SecondAbility();
    _Game_Interface_MonsterHUDs_UI_SabotageComponent::UI_SabotageComponent_C*& get_UI_SabotageComponent();
    _Script_Engine::Texture2D*& get_FirstAbilityImage();
    _Script_Engine::Texture2D*& get_SecondAbilityImage();
    void* get_FirstAbilityText();
    void* get_SecondAbilityText();
    float& get_FirstAbilityUIMaximum();
    float& get_FirstAbilityUIMinimum();
    float& get_SecondAbilityUIMinimum();
    float& get_SecondAbilityUIMaximum();
    bool get_HideSecondAbility();
    void set_HideSecondAbility(bool value);
    _Script_Engine::Texture2D*& get_SabotageAbilityImage();
    float& get_SabotageAbilityUIMinimum();
    float& get_SabotageAbilityUIMaximum();
    void* get_SabotageAbilityText();
    static _Script_CoreUObject::Class* static_class();
    void PlaySabotageAbilityRechargeAnim(float Time);
    void Init();
    void PlaySecondAbilityRechargeAnim(float Cooldown);
    void PlayFirstAbilityRechargeAnim(float Cooldown);
    void SetAbilityImageIcon(_Script_UMG::Image* Imag, _Script_Engine::Texture2D* Icon);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_AbilitiesComponent(int32_t EntryPoint);
}; // Size: 0x308
#pragma pack(pop)
}
