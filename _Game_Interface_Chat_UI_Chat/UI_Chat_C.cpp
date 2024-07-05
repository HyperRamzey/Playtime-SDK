#include "..\FUObjectArray.hpp"
#include "UI_Chat_C.hpp"
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\FocusEvent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\EventReply.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\MultiLineEditableTextBox.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::Update_Chat_Visibility() {
    return;
}
_Script_UMG::ProgressBar*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_ProgressBar_316() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Timeout() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Button*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_SwearBox() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::ExecuteUbergraph_UI_Chat(int32_t EntryPoint) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Length() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::ScrollBox*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Content() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Image_86() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::CanvasPanel*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x298);
}
_Script_UMG::MultiLineEditableTextBox*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_TextEntry() {
    return *(_Script_UMG::MultiLineEditableTextBox**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Overlay*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_TypeBox() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_WidgetBlocker() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
bool _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_Ready() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::set_Ready(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_MaxCharacters() {
    return *(int32_t*)((uintptr_t)this + 0x2c4);
}
bool _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_CanSend() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::set_CanSend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_Chat_UI_Chat::UI_Chat_C::get_TimeoutTimer() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Game_Interface_Chat_UI_Chat::UI_Chat_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Chat/UI_Chat.UI_Chat_C");
    return result;
}
_Script_UMG::EventReply _Game_Interface_Chat_UI_Chat::UI_Chat_C::OnPreviewKeyDown0(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent) {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::CheckProfanity() {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::UpdateLength() {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::ReceiveMessage(void* SenderName, void* Comm, void* Location, _Script_AdvancedSessions::BPUniqueNetId SenderID) {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::ReadyType(bool Condition) {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::Construct0() {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::OnFocusLost0(_Script_SlateCore::FocusEvent InFocusEvent) {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::ResetTimeout() {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::HideSelf() {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::Event_Update_Length() {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::BndEvt__UI_Chat_TextEntry_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(void*& Text) {
    return;
}
void _Game_Interface_Chat_UI_Chat::UI_Chat_C::MessageCommited(void* Text, void* Commit_Method) {
    return;
}
