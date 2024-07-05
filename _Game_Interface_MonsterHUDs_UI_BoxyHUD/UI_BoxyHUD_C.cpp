#include "..\FUObjectArray.hpp"
#include "UI_BoxyHUD_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_MonsterHUD\UI_MonsterHUD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_Engine::Texture2D*& _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_Second_Ability_Image() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_Fader() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_UI_MonsterHUD() {
    return *(_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_Second_Ability_Text() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_Engine::Texture2D*& _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_First_Ability_Image() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::get_First_Ability_Text() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MonsterHUDs/UI_BoxyHUD.UI_BoxyHUD_C");
    return result;
}
void _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::Construct0() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::SetChargeAmount(float Percent) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::SetChargeColor(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::ResetChargeColor() {
    return;
}
void _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C::ExecuteUbergraph_UI_BoxyHUD(int32_t EntryPoint) {
    return;
}
