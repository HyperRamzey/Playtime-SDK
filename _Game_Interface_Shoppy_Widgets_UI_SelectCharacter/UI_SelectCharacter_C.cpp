#include "..\FUObjectArray.hpp"
#include "UI_SelectCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
void* _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Border*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_HighlightSpecialistFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_HighlightMonsterFrame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_Engine::Texture*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::Border*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterSelected() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistSelected() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistBGRender() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::Texture*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_SpecialistImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x2e0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::get_MonsterBGRender() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_SelectCharacter.UI_SelectCharacter_C");
    return result;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::BndEvt__UI_SelectCharacter_SpecialistButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::BndEvt__UI_SelectCharacter_MonsterButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::BndEvt__UI_SelectCharacter_MonsterButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::BndEvt__UI_SelectCharacter_MonsterButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::BndEvt__UI_SelectCharacter_SpecialistButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::BndEvt__UI_SelectCharacter_SpecialistButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::ExecuteUbergraph_UI_SelectCharacter(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::SpecialistSelected__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_SelectCharacter::UI_SelectCharacter_C::MonsterSelected__DelegateSignature() {
    return;
}
