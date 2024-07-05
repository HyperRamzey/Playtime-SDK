#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "W_NavRadar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Overlay*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_Overlay_Radar() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_Image_Minimap() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_Image_PlayerFrustum() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_Image_RadarBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_TextBlock_E() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_TextBlock_N() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_TextBlock_S() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_TextBlock_W() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_IsShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::set_IsShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_MiniMapMatInst() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2b8);
}
_Script_Engine::Texture*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_MapImage() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x2c0);
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_Dimentions() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::Init(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* NavSystem, _Script_Engine::Texture* MapImage, float Dimentions, float Zoom) {
    return;
}
float& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::get_Zoom() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavRadar.W_NavRadar_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::SetAngle(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::Toggle() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::Show(bool IsShow) {
    return;
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::AddPlayerIcon(void* PlayerIconClass) {
    return;
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::AddIcon(void* WidgetClass) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C::ExecuteUbergraph_W_NavRadar(int32_t EntryPoint) {
    return;
}
