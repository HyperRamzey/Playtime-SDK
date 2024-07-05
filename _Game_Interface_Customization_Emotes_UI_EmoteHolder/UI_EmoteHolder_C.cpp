#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_EmoteHolder_C.hpp"
#include "..\_Game_Interface_Customization_Emotes_UI_EmoteSlot\UI_EmoteSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\CustomizationSaveGame.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Button*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Button_90() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_EmoteSlot2() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Timeout() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Open() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_EmoteSlot4() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_EmoteSlot1() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C**)((uintptr_t)this + 0x280);
}
_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_EmoteSlot3() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C**)((uintptr_t)this + 0x290);
}
_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_EmoteSlot5() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteSlot::UI_EmoteSlot_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Image_33() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Image_156() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_UI_N_RadialProgressBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2b8);
}
int32_t& _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Selected() {
    return *(int32_t*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_Slots() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_ClickedEmote() {
    return (void*)((uintptr_t)this + 0x2d8);
}
bool _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_IsInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::set_IsInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::get_AutoHideTimer() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Emotes/UI_EmoteHolder.UI_EmoteHolder_C");
    return result;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::EmoteHolder_Show(_Script_Playtime_Multiplayer::CustomizationSaveGame* SaveGame, void* Character, bool LongTimeout) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::Hide() {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::SetSelected(int32_t Selected) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::BndEvt__UI_EmoteHolder_Button_90_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::HideNoCallback() {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::ExecuteUbergraph_UI_EmoteHolder(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C::ClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
