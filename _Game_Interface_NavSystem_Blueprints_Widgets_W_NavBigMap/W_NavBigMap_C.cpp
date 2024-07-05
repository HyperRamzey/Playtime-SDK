#include "..\FUObjectArray.hpp"
#include "W_NavBigMap_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap\W_NavOnlyBigMap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_Image_mouse_middle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_Image_mouse_left() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_Image_mouse_right() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_Image_mouse_wheel() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
bool _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_IsShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::get_W_OnlyBigMap() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C**)((uintptr_t)this + 0x290);
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::set_IsShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavBigMap.W_NavBigMap_C");
    return result;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::ToggleShow() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::Show(bool IsShow) {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::Construct0() {
    return;
}
void _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C::ExecuteUbergraph_W_NavBigMap(int32_t EntryPoint) {
    return;
}
