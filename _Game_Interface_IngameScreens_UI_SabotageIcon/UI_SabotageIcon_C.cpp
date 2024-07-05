#include "..\FUObjectArray.hpp"
#include "UI_SabotageIcon_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\SabotageDef.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_FadeIconIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_FadeAllOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_FadeTimeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_SabotageIcon.UI_SabotageIcon_C");
    return result;
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_SabotageEffectBox() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_SabotTime() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::get_SabotIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
void _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::SetSabotageIcon(_Script_Playtime_Multiplayer::SabotageDef SabotageDef) {
    return;
}
void _Game_Interface_IngameScreens_UI_SabotageIcon::UI_SabotageIcon_C::ExecuteUbergraph_UI_SabotageIcon(int32_t EntryPoint) {
    return;
}
