#include "..\FUObjectArray.hpp"
#include "UI_KeyBind_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Slate\InputChord.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\InputKeySelector.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Border*& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Name() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Image_164() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Image_260() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/General/UI_KeyBind.UI_KeyBind_C");
    return result;
}
void* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_VisibleName() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_UMG::InputKeySelector*& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_InputKeySelector() {
    return *(_Script_UMG::InputKeySelector**)((uintptr_t)this + 0x280);
}
int32_t& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_TabLevel() {
    return *(int32_t*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Spacer*& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Spacer_130() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_ValueChanged() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Default() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_ActionName() {
    return (void*)((uintptr_t)this + 0x2c4);
}
bool _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_IsAxisMapping() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc + 0)) & 1 != 0;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::set_IsAxisMapping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_AxisMapValue() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::get_Key() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::BndEvt__UI_KeyBind_InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature() {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::SetupKeyBinding(_Script_InputCore::Key Key) {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::BndEvt__UI_KeyBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(_Script_Slate::InputChord SelectedKey) {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::RESETTODEFAULTS() {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::Update_Visuals() {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::Construct0() {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::Set_Visible_Name(void* VisibleName) {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::ExecuteUbergraph_UI_KeyBind(int32_t EntryPoint) {
    return;
}
void _Game_Interface_General_UI_KeyBind::UI_KeyBind_C::ValueChanged__DelegateSignature(float Slider, int32_t ComboBoxIndex, bool CheckBox, bool RequiresApply) {
    return;
}
