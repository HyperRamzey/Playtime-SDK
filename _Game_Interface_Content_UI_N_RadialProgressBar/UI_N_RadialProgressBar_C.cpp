#include "..\FUObjectArray.hpp"
#include "UI_N_RadialProgressBar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
float& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Inner_Thickness() {
    return *(float*)((uintptr_t)this + 0x27c);
}
void* _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Image_33() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
float& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Progress() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_End_Progress() {
    return *(float*)((uintptr_t)this + 0x274);
}
void* _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Fill_Color() {
    return (void*)((uintptr_t)this + 0x284);
}
float& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Outer_Thickness() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Density() {
    return *(float*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Background_Color() {
    return (void*)((uintptr_t)this + 0x294);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::get_Material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Content/UI_N_RadialProgressBar.UI_N_RadialProgressBar_C");
    return result;
}
_Script_SlateCore::SlateBrush _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::GetBrush_0() {
    return;
}
void _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::Construct0() {
    return;
}
void _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C::ExecuteUbergraph_UI_N_RadialProgressBar(int32_t EntryPoint) {
    return;
}
