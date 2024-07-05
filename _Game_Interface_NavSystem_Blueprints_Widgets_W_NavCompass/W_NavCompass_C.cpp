#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Structures_S_NavDirectionInfo\S_NavDirectionInfo.hpp"
#include "W_NavCompass_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_Image_CompassBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_Image_Arrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_CompassMarkWidgetAry() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_UMG::Overlay*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_Overlay_Compass() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x278);
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_IsShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_DirectionWidgetAry() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::get_Text_CurrentAngle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::set_IsShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavCompass.W_NavCompass_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::Toggle() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::ShowF(bool IsShow) {
    return;
}
_Script_UMG::UserWidget* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::AddIcon(void* UserWidgetClass) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::AddDirectionIcon(_Game_Interface_NavSystem_Blueprints_Structures_S_NavDirectionInfo::S_NavDirectionInfo Info, _Script_UMG::UserWidget*& RetturnValue) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::UpdateDistance(float Distance) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::UpdateIndicatorOffScreenAngle(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::ShowOffScreenArrow(bool IsVisible) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::UpdateMainText(void* Text) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::Show(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::SetArrowAngle(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::UpdateParentAngle(float ParentAngle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::UpdateMapRotate(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::SetScaleUsingSize(float IpScale) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::Construct0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::UpdateCompassCurrentAngle(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C::ExecuteUbergraph_W_NavCompass(int32_t EntryPoint) {
    return;
}
