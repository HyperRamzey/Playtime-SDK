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
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_SelectCharacter {
#pragma pack(push, 1)
struct UI_SelectCharacter_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x98]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightSpecialistFrame();
    _Script_UMG::WidgetAnimation*& get_HighlightMonsterFrame();
    _Script_UMG::Image*& get_MonsterBackground();
    _Script_UMG::Border*& get_MonsterBorder();
    _Script_UMG::Button*& get_MonsterButton();
    _Script_UMG::Image*& get_MonsterFrame();
    _Script_UMG::Image*& get_SpecialistBackground();
    _Script_UMG::Border*& get_SpecialistBorder();
    _Script_UMG::Button*& get_SpecialistButton();
    _Script_UMG::Image*& get_SpecialistFrame();
    void* get_MonsterSelected();
    void* get_SpecialistSelected();
    _Script_Engine::MaterialInstanceDynamic*& get_SpecialistBGRender();
    _Script_Engine::Texture*& get_SpecialistImage();
    _Script_Engine::MaterialInstanceDynamic*& get_MonsterBGRender();
    _Script_Engine::Texture*& get_MonsterImage();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_SelectCharacter_SpecialistButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_SelectCharacter_MonsterButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_SelectCharacter_MonsterButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SelectCharacter_MonsterButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SelectCharacter_SpecialistButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SelectCharacter_SpecialistButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SelectCharacter(int32_t EntryPoint);
    void SpecialistSelected__DelegateSignature();
    void MonsterSelected__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
