#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_Appearance\UI_Appearance_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CosmeticItem\UI_CosmeticItem_C.hpp"
#include "UI_CosmeticSelectionGrid_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\InvalidationBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_Grid_OnHovered() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::InvalidationBox*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_InvalidationBox_0() {
    return *(_Script_UMG::InvalidationBox**)((uintptr_t)this + 0x270);
}
_Script_UMG::ScrollBox*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_Content() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x268);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_UniformGridPanel_126() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_Type() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_ReleasedGesturesButton() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_Grid_OnUnHovered() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_Grid_OnReleased() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C*& _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_UI_AppearanceParent() {
    return *(_Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C**)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::get_Grid_OnPopulate() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::ReleasedGesturesButton__DelegateSignature(int32_t Slot, int32_t Gesture) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::PopulateGrid(void*& Array, bool Loaded_) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::SetItems(void* Type, void* For, void*& Inventory) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::OnHoveredEvent(int32_t ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::OnUnHoveredEvent(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::OnReleasedEvent(int32_t Item_ID, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::Grid_OnPopulate__DelegateSignature(int32_t Equipped_Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::OnPopulateGrid(int32_t Equipped_Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::PreloadDefaultCosmetics(void* Type, void* CharacterType) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::ExecuteUbergraph_UI_CosmeticSelectionGrid(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::Grid_OnReleased__DelegateSignature(int32_t Item_ID, void* Type, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller, void* CosmeticFor) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::Grid_OnUnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid::UI_CosmeticSelectionGrid_C::Grid_OnHovered__DelegateSignature(int32_t Item_ID) {
    return;
}
