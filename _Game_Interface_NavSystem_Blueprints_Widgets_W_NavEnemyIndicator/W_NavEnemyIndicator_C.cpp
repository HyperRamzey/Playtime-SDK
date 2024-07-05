#include "..\FUObjectArray.hpp"
#include "W_NavEnemyIndicator_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::AddIcon(void* UserWidgetClass) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::get_Overlay_Indicator() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x268);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::Toggle() {
    return;
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::get_IsShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::set_IsShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavEnemyIndicator.W_NavEnemyIndicator_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::Show(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::Construct0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C::ExecuteUbergraph_W_NavEnemyIndicator(int32_t EntryPoint) {
    return;
}
