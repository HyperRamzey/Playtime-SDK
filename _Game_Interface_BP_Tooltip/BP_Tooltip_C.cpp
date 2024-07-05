#include "..\FUObjectArray.hpp"
#include "BP_Tooltip_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_Tooltip\UI_Tooltip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void* _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_Tooltip() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::BillboardComponent*& _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x228);
}
float& _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_Duration() {
    return *(float*)((uintptr_t)this + 0x258);
}
_Script_UMG::WidgetComponent*& _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_Widget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Game_Interface_BP_Tooltip::BP_Tooltip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/BP_Tooltip.BP_Tooltip_C");
    return result;
}
_Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C*& _Game_Interface_BP_Tooltip::BP_Tooltip_C::get_W_Tooltip() {
    return *(_Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C**)((uintptr_t)this + 0x250);
}
void _Game_Interface_BP_Tooltip::BP_Tooltip_C::SelfDestruct() {
    return;
}
void _Game_Interface_BP_Tooltip::BP_Tooltip_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Interface_BP_Tooltip::BP_Tooltip_C::SetNonEssentialHUDVisibility(bool Visible) {
    return;
}
void _Game_Interface_BP_Tooltip::BP_Tooltip_C::ExecuteUbergraph_BP_Tooltip(int32_t EntryPoint) {
    return;
}
