#include "..\FUObjectArray.hpp"
#include "UI_PlayCard_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::CanvasPanel*& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_RootCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_Button_94() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_Card() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_OnReleased() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_Type() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_TypeText() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_DescriptionText() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_Engine::Texture2D*& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_CardBG() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2d0);
}
bool _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_HoveredScale() {
    return (void*)((uintptr_t)this + 0x2dc);
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_DefaultScale() {
    return (void*)((uintptr_t)this + 0x2e4);
}
float& _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::get_HoverAnimationSpeed() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Play/UI_PlayCard.UI_PlayCard_C");
    return result;
}
void* _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::Get_Type_Text_0() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::BndEvt__UI_PlayCard_Button_94_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::BndEvt__UI_PlayCard_Button_94_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::BndEvt__UI_PlayCard_Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::Update_PlayCard() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::ExecuteUbergraph_UI_PlayCard(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C::OnReleased__DelegateSignature() {
    return;
}
