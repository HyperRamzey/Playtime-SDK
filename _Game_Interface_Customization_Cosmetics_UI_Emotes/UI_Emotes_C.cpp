#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticItem\UI_CosmeticItem_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_EmoteSelectionGrid\UI_EmoteSelectionGrid_C.hpp"
#include "UI_Emotes_C.hpp"
#include "..\_Game_Interface_Customization_Emotes_UI_EmoteHolder\UI_EmoteHolder_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_UI_EmoteHolder() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_RarityText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_CategoryText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_EmoteInfo() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_Gradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_ItemName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_SlotText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_UI_EmoteHolder_1() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_Customization_Cosmetics_UI_EmoteSelectionGrid::UI_EmoteSelectionGrid_C*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_UI_EmoteSelectionGrid_1() {
    return *(_Game_Interface_Customization_Cosmetics_UI_EmoteSelectionGrid::UI_EmoteSelectionGrid_C**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_Caller() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C**)((uintptr_t)this + 0x2b0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2b8);
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::ExecuteUbergraph_UI_Emotes(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x2c0);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_Item_ID() {
    return *(int32_t*)((uintptr_t)this + 0x2c4);
}
void* _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::get_Changed() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_Emotes.UI_Emotes_C");
    return result;
}
void* _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::Get_CategoryText_Text_0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::SetCharacterType(void* NewValue) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature(int32_t Item_ID, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller, void* CosmeticFor) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::Construct0() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::EmotesUpdateVisuals() {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::GotInventory(void*& Inventory) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::Failure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_Emotes::UI_Emotes_C::Changed__DelegateSignature() {
    return;
}
