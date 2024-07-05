#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo\BP_NavLevelInfo_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint\BP_NavWaypoint_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement\BPC_NavElement_C.hpp"
#include "BPC_NavSystem_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo\S_NavWaypointInfo.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap\W_NavBigMap_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass\W_NavCompass_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator\W_NavEnemyIndicator_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator\W_NavIndicator_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain\W_NavMain_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap\W_NavMinimap_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap\W_NavOnlyBigMap_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar\W_NavRadar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseCompass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseBigmap() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 1 != 0;
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator::W_NavIndicator_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator::W_NavIndicator_C**)((uintptr_t)this + 0xc0);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::WorldToScreen(_Script_CoreUObject::Vector WorldLoc, _Script_CoreUObject::Vector2D& ScreenLoc) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_PrevIndicatorScreenLoc() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MainWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C**)((uintptr_t)this + 0xb8);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseIndicator() {
    return (*(uint8_t*)((uintptr_t)this + 0xd9 + 0)) & 1 != 0;
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseCompass() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_PlayerActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x168);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_EnemyIndicatorWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C**)((uintptr_t)this + 0xc8);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CompassWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C**)((uintptr_t)this + 0xd0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseMinimap() {
    return (*(uint8_t*)((uintptr_t)this + 0xdb + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseIndicator(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseEnemyIndicator() {
    return (*(uint8_t*)((uintptr_t)this + 0xda + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::SetMinMaxIndicatorDistancesToUnusable() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseEnemyIndicator(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda + 0);
    *(uint8_t*)((uintptr_t)this + 0xda + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CompassMinDistance() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseMinimap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdb + 0);
    *(uint8_t*)((uintptr_t)this + 0xdb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseRadar() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseRadar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseBigmap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateMinimap_PlayerIcon() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UseRunTimeCaptureImage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x239 + 0);
    *(uint8_t*)((uintptr_t)this + 0x239 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0xe0);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddZoomMinimap(float AddValue) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MiniampPlayerIconWidgetClass() {
    return (void*)((uintptr_t)this + 0xe8);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapDimentions() {
    return *(float*)((uintptr_t)this + 0xf0);
}
_Script_Engine::Texture2D*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_BigmapImage() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0xf8);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_BigmapDimentions() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMinDistance_0() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_BigmapPlayerMarkIconClass() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateElements() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_IsInit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23a + 0);
    *(uint8_t*)((uintptr_t)this + 0x23a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CompassDirections() {
    return (void*)((uintptr_t)this + 0x110);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CompassWidgetHalfWidth() {
    return *(float*)((uintptr_t)this + 0x120);
}
_Script_Engine::CameraComponent*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_PlayerCamComp() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x128);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_IsRotateMinimap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C**)((uintptr_t)this + 0x130);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C**)((uintptr_t)this + 0x138);
}
_Script_Engine::Texture*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarMinimapImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x208);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_OnlyBigMapWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C**)((uintptr_t)this + 0x140);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_BigmapWidgetRef() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C**)((uintptr_t)this + 0x148);
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapPlayerIconRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x150);
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarPlayerIconRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x158);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateEnemyIndicatorElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* IpElement, float IpRadius) {
    return;
}
_Script_UMG::UserWidget*& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_BigmapPlayerIconRef() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x160);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UsePartyPlayerIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::SetupFromLevelInfo(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C* IpLevelInfo) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_ElementAry() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_BeforeReqElementAry() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_ApplyCamRot() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseAxisType() {
    return (void*)((uintptr_t)this + 0x200);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorBorderSize() {
    return *(float*)((uintptr_t)this + 0x19c);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CompassViewAngle() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Components/BPC_NavSystem.BPC_NavSystem_C");
    return result;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CamOffset() {
    return (void*)((uintptr_t)this + 0x1a4);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapZoom() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IsRotateMinimap() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b4 + 0)) & 1 != 0;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_TempArray() {
    return (void*)((uintptr_t)this + 0x2b8);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_CompassMaxDistance() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::CheckElementDistance(_Script_Engine::Actor* ElementActor, float Min, float Max) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMinDistance() {
    return (void*)((uintptr_t)this + 0x1c8);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::CheckIndicatorElementDistance(_Script_Engine::Actor* ElementActor, _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Nav_Element) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMaxDistance() {
    return (void*)((uintptr_t)this + 0x1d8);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IsRotateRadar() {
    return (*(uint8_t*)((uintptr_t)this + 0x224 + 0)) & 1 != 0;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_EnemyIndicatorMinDistance() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_EnemyIndicatorMaxDistance() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddIndicatorIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapMinDistance() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarMinDistance() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_MinimapMaxDistance() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateUseWidgets() {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarMaxDistance() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarPlayerIconWidgetClass() {
    return (void*)((uintptr_t)this + 0x210);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateBigmap_PlayerIcon() {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarDimentions() {
    return *(float*)((uintptr_t)this + 0x218);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarZoom() {
    return *(float*)((uintptr_t)this + 0x21c);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleMinimap() {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_RadarBorderSize() {
    return *(float*)((uintptr_t)this + 0x220);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_IsRotateRadar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x224 + 0);
    *(uint8_t*)((uintptr_t)this + 0x224 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_WaypointInfoAry() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::set_UsePartyPlayerIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_UseRunTimeCaptureImage() {
    return (*(uint8_t*)((uintptr_t)this + 0x239 + 0)) & 1 != 0;
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IsInit() {
    return (*(uint8_t*)((uintptr_t)this + 0x23a + 0)) & 1 != 0;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMinDistance_1() {
    return *(float*)((uintptr_t)this + 0x240);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddRadarIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMinDistance_2() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMinDistance_3() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMinDistance_4() {
    return *(float*)((uintptr_t)this + 0x24c);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMaxDistance_0() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMaxDistance_1() {
    return *(float*)((uintptr_t)this + 0x254);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMaxDistance_2() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMaxDistance_3() {
    return *(float*)((uintptr_t)this + 0x25c);
}
float& _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_IndicatorMaxDistance_4() {
    return *(float*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::get_NavElementMap() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::HandleVisibilityBasedOnSettings(bool Condition) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::SetMinMaxIndicatorDistancesToDefault() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::Shutdown() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::Initialize() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::GetWaypoint(_Script_CoreUObject::Vector2D IpLoc, _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo::S_NavWaypointInfo& Result) {
    return;
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C* _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::SpawnWaypont(_Script_CoreUObject::Vector Loc) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::DistanceToScreenLoc(_Script_Engine::Actor* Actor1, _Script_Engine::Actor* Actor2, float& X, float& Y) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleEnemyIndicator() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowEnemyIndicator(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateRadar() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateBigmap() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateMinimap() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateEnemyIndicator() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateIndicator() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateCompass() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleRotateMinimap() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::CreatePlayerIcons() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddEnemyIndicatorIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::SetPropIndicatorWidget(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element, _Script_CoreUObject::Vector2D Translation, float Angle, bool IsOffscreen, bool IsShow, _Script_UMG::UserWidget* IndicatorWidget) {
    return;
}
float _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::GetDistanceElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateCheckDistanceElements() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleRadar() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowRadar(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleIndicator() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowIndicator(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleCompass() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowCompass(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowMinimap(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateRadar_PlayerIcon() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateRadarElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ToggleBigMap() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowBigMap(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateBigmapElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddBigmapIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ShowElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element, bool IsVisible) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::RemoveElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateMinimapElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::FindAngle(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B, float& Degree) {
    return;
}
_Script_CoreUObject::Vector2D _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::FindCoord(float IpRadius, float IpDegrees) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddMinimapIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
float _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::GetElementDistance(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
_Script_CoreUObject::Vector _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::GetPlayerCamLoc() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateCompassElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* IpElement) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::IsIndicatorInViewport(_Script_CoreUObject::Vector2D ScreenLoc, bool IsFlip, bool& Result) {
    return;
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::GetFlipElementLoc(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element, _Script_CoreUObject::Vector2D& ScreenLoc) {
    return;
}
bool _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::IsFlipElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
_Script_CoreUObject::Vector2D _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::GetScreenSize() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateIndicatorElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::AddCompassIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::UpdateCompassDirectionWidgets() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::Show(bool IpVisible) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::OnPlayerTurned() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ReqAddElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* NavElementComp) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::Server_SpawnWaypoint(_Script_CoreUObject::Vector InLoc) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::SetNonEssentialHUDVisibility(bool Visible) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C::ExecuteUbergraph_BPC_NavSystem(int32_t EntryPoint) {
    return;
}
