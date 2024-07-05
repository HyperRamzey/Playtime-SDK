#include "..\FUObjectArray.hpp"
#include "BPC_NavElement_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_MinimapIconWidgetClass() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xb0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14d + 0);
    *(uint8_t*)((uintptr_t)this + 0x14d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_CompassIconWidgetClass() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_EnemyIndicatorIconWidgetClass() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0xc0);
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_CompassIconWidgetRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0xc8);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IndicatorIconWidgetClass() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IndicatorIconWidgetRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0xd8);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::Show(bool IsVisible) {
    return;
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_EnemyIndicatorIconWidgetRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0xf0);
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_MinimapIconWidgetRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0xf8);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsCheckDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14c + 0);
    *(uint8_t*)((uintptr_t)this + 0x14c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_BigmapIconWidgetClass() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_RadarIconWidgetClass() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsRotate_MinimapIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IndicatorWorldOffset() {
    return (void*)((uintptr_t)this + 0x138);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsRotate_MinimapIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x14d + 0)) & 1 != 0;
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_RadarIconWidgetRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x118);
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_BigmapIconWidgetRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x120);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_ShouldIndicatorFade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x154 + 0);
    *(uint8_t*)((uintptr_t)this + 0x154 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsRotate_RadarIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x135 + 0);
    *(uint8_t*)((uintptr_t)this + 0x135 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::RemoveWidgetFromParent() {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_PrevIndicatorScreenLoc() {
    return (void*)((uintptr_t)this + 0x12c);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsRotate_BigIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x134 + 0)) & 1 != 0;
}
int32_t& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_Channel() {
    return *(int32_t*)((uintptr_t)this + 0x150);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsRotate_BigIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x134 + 0);
    *(uint8_t*)((uintptr_t)this + 0x134 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsRotate_RadarIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x135 + 0)) & 1 != 0;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_MinDistance() {
    return *(float*)((uintptr_t)this + 0x144);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x148);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsCheckDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x14c + 0)) & 1 != 0;
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_IsInit() {
    return (*(uint8_t*)((uintptr_t)this + 0x14e + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::set_IsInit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14e + 0);
    *(uint8_t*)((uintptr_t)this + 0x14e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_ShouldIndicatorFade() {
    return (*(uint8_t*)((uintptr_t)this + 0x154 + 0)) & 1 != 0;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x158);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Components/BPC_NavElement.BPC_NavElement_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::Adjust_Opacity(float MyDist, float ClosestDist) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::Use(bool IsUse) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::ShowUserWidget(_Script_UMG::UserWidget* UserWidget, bool IsShow) {
    return;
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::CheckDistance(float Distance) {
    return;
}
_Script_CoreUObject::Vector _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::GetOwnerIndicatorLoc() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::SetCompassIconWidget(_Script_UMG::UserWidget* CompassMarkWidget) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::Start() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::Init() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::ReInit(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* InNavSystem) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C::ExecuteUbergraph_BPC_NavElement(int32_t EntryPoint) {
    return;
}
