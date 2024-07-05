#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "W_NavOnlyBigMap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "..\_Script_UMG\CanvasPanelSlot.hpp"
#include "..\_Script_UMG\EventReply.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::EventReply _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::OnMouseButtonUp0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_Image_Map() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_MouseDelta() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_UMG::Overlay*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_Overlay_Map() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_Dimentions() {
    return *(float*)((uintptr_t)this + 0x278);
}
_Script_Engine::Texture2D*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_MapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x280);
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::AddIcon(void* UserWidgetClass) {
    return;
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_IsShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_OriginOverlayMapSize() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::set_IsShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::EventReply _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::OnMouseMove0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_IsMouseButtonDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x289 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::set_IsMouseButtonDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x289 + 0);
    *(uint8_t*)((uintptr_t)this + 0x289 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_IsDrag() {
    return (*(uint8_t*)((uintptr_t)this + 0x28a + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::set_IsDrag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28a + 0);
    *(uint8_t*)((uintptr_t)this + 0x28a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_SaftyZoneX() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_SaftyZoneY() {
    return *(float*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_DetectDragReturnValue() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::GetScreenSize(_Script_CoreUObject::Vector2D& Result) {
    return;
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_LastMousePosition() {
    return (void*)((uintptr_t)this + 0x350);
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_DragEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::ToggleShow() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::set_DragEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x370);
}
_Script_UMG::CanvasPanelSlot*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_OverlayMapSlot() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0x368);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_TotalIncreaseSize() {
    return (void*)((uintptr_t)this + 0x378);
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_OverlayMapZoom() {
    return *(float*)((uintptr_t)this + 0x388);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_OverlayMapAlignment() {
    return (void*)((uintptr_t)this + 0x38c);
}
_Script_UMG::CanvasPanelSlot*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::get_SelfSlot() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavOnlyBigMap.W_NavOnlyBigMap_C");
    return result;
}
_Script_CoreUObject::Vector2D _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::CalculateAlignment(_Script_CoreUObject::Vector2D IpMouseWidgetSpaceLoc) {
    return;
}
_Script_UMG::EventReply _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::OnMouseWheel0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::GetScreenHalfSize(_Script_CoreUObject::Vector2D& Result) {
    return;
}
_Script_UMG::EventReply _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::OnMouseButtonDown0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::Show(bool IsShow) {
    return;
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::AddPlayerIcon(void* PlayerMarkClass) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::Init(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* NavSystem, _Script_Engine::Texture2D* MapImage, float Dimentions) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::Construct0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C::ExecuteUbergraph_W_NavOnlyBigMap(int32_t EntryPoint) {
    return;
}
