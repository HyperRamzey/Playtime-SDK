#include "..\FUObjectArray.hpp"
#include "UI_Damage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::get_PainBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::get_Animate() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::get_HideTimer() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_Damage.UI_Damage_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::Play() {
    return;
}
void _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::Hide() {
    return;
}
void _Game_Interface_IngameScreens_UI_Damage::UI_Damage_C::ExecuteUbergraph_UI_Damage(int32_t EntryPoint) {
    return;
}
