#include "..\FUObjectArray.hpp"
#include "UI_ChatMessage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_SenderID() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_PlayerName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_TextMessageComm() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_TextMessageIn() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_TextMessageLocation() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_SenderName() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_Comm() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::get_Location() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Chat/UI_ChatMessage.UI_ChatMessage_C");
    return result;
}
void _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::SetStyle() {
    return;
}
void _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::Construct0() {
    return;
}
void _Game_Interface_Chat_UI_ChatMessage::UI_ChatMessage_C::ExecuteUbergraph_UI_ChatMessage(int32_t EntryPoint) {
    return;
}
