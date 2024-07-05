#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "W_NavMinimap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_Button_ZoomOut() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::Toggle() {
    return;
}
_Script_UMG::Button*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_Button_ZoomIn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_Image_Minimap() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_MiniMapMatInst() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x290);
}
_Script_UMG::Overlay*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_Overlay_Minimap() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x280);
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::AddIcon(void* WidgetClass) {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_Dimentions() {
    return *(float*)((uintptr_t)this + 0x288);
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_Zoom() {
    return *(float*)((uintptr_t)this + 0x28c);
}
_Script_Engine::Texture*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_MapImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x298);
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_IsShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::set_IsShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::get_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavMinimap.W_NavMinimap_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::GetMinimapSize(float& ResultSize) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::Show(bool IsShow) {
    return;
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::AddPlayerIcon(void* PlayerIconWidgetClass) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::Init(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* NavSystem, _Script_Engine::Texture* MapImage, float Dimentions, float Zoom) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::UpdateRotate(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::Construct0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C::ExecuteUbergraph_W_NavMinimap(int32_t EntryPoint) {
    return;
}
