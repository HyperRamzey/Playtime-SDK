#include "..\FUObjectArray.hpp"
#include "UI_EmoteSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Emotes/UI_EmoteSlot.UI_EmoteSlot_C");
    return result;
}
void* _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::get_Container() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
float& _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::get_Rotation() {
    return *(float*)((uintptr_t)this + 0x284);
}
int32_t& _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::get_ItemId() {
    return *(int32_t*)((uintptr_t)this + 0x280);
}
void _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::ExecuteUbergraph_UI_EmoteSlot(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::SetHovered(bool Hovered) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C::SetItemID(int32_t ItemId) {
    return;
}
