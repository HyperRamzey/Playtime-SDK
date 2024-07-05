#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter\BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo\UI_LongCosmeticInfo_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton_New\UI_MP_N_MenuButton_New_C.hpp"
#include "UI_Shoppy_Preview_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::InitializePreview(int32_t ItemId) {
    return;
}
void* _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_InfoBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_BundleBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::ResetRotation() {
    return;
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_CloseLoading() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_BundleDisplayContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_BundleItemGrid() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x278);
}
_Script_Engine::Actor*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_Spinning_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x590);
}
_Script_UMG::Button*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_CharacterRotator() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x280);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::PopulatePreviewGrid() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_DarkenPurchaseBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_ItemLoading() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::BuyFail(void* ErrorMessage) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_ItemName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_ItemPrice() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_LoadOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_PLaycoinIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_PreviewBundleTrace() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_PreviewSingleTrace() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_PurchaseBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/UI_Shoppy_Preview.UI_Shoppy_Preview_C");
    return result;
}
_Script_UMG::Button*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_PurchaseButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_TimeAvailableNumber() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_TopBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
_Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_UI_LongCosmeticInfo() {
    return *(_Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C**)((uintptr_t)this + 0x2f8);
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x300);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
int32_t& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_ItemId() {
    return *(int32_t*)((uintptr_t)this + 0x308);
}
void* _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_CosmeticStruct() {
    return (void*)((uintptr_t)this + 0x310);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::PreviewItemReleased(int32_t Preview_Item_ID) {
    return;
}
bool _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_IsRotating() {
    return (*(uint8_t*)((uintptr_t)this + 0x558 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::BuyComplete() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::set_IsRotating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x558 + 0);
    *(uint8_t*)((uintptr_t)this + 0x558 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_BundlePreviewActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x5a8);
}
void* _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_PreviousMousePosition() {
    return (void*)((uintptr_t)this + 0x55c);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::ExecuteUbergraph_UI_Shoppy_Preview(int32_t EntryPoint) {
    return;
}
bool _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_Finished() {
    return (*(uint8_t*)((uintptr_t)this + 0x564 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::SetPreviewCharacterMain() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::set_Finished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x564 + 0);
    *(uint8_t*)((uintptr_t)this + 0x564 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_TimeoutAfter() {
    return *(float*)((uintptr_t)this + 0x568);
}
void* _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_CloseLoadingScreen() {
    return (void*)((uintptr_t)this + 0x570);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller) {
    return;
}
void* _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_EmotePreviewHandle() {
    return (void*)((uintptr_t)this + 0x580);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_MonsterPlayerMenuCharacter() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x588);
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_CameraManager() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x598);
}
int32_t& _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::get_Preview_Item() {
    return *(int32_t*)((uintptr_t)this + 0x5a0);
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::TransitionCosmeticCamera(void* Cosmetic_Type, void* Character_Type) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::Construct0() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::PostTransaction() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::SetCharacterRefs(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player, _Script_Engine::SkeletalMeshActor* Monster, _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C* PlayerMonsterMenuCharacter, _Script_Engine::Actor* Spinning_Actor) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::SetPreviewCharacter(int32_t Preview_ID) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::PreviewItemHovered(int32_t PreviewItemID) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::PreviewItemUnHovered() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::ConfirmPurchase() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C::CloseLoadingScreen__DelegateSignature() {
    return;
}
