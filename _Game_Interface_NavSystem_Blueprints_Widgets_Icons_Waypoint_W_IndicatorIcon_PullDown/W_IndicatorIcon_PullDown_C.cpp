#include "..\FUObjectArray.hpp"
#include "W_IndicatorIcon_PullDown_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::CanvasPanel*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_CanvasPanel_OnScreen() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_SAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_TextBlock_Distance_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::CanvasPanel*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_CanvasPanel_OffScreen() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_Image_AngleArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::CanvasPanel*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_CanvasPanel_Arrow() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_Image_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_Image_Icon2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_Image_S() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_TextBlock_Distance() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
int32_t& _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::get_MaxDisplayedDistance() {
    return *(int32_t*)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/Icons/Waypoint/W_IndicatorIcon_PullDown.W_IndicatorIcon_PullDown_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::GetScaleDesiredSize(_Script_CoreUObject::Vector2D& Result) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::UpdateMainText(void* Text) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::SetArrowAngle(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::UpdateParentAngle(float ParentAngle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::UpdateMapRotate(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::SetScaleUsingSize(float IpScale) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::Construct0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::UpdateDistance(float Distance) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::UpdateIndicatorOffScreenAngle(float Angle) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::ShowOffScreenArrow(bool IsVisible) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::Show(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_Icons_Waypoint_W_IndicatorIcon_PullDown::W_IndicatorIcon_PullDown_C::ExecuteUbergraph_W_IndicatorIcon_PullDown(int32_t EntryPoint) {
    return;
}