#include "..\FUObjectArray.hpp"
#include "UI_CosmeticInfo_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_SlotText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_RarityText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
int32_t& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_previewitem() {
    return *(int32_t*)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_Gradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_ItemName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_RaritySlot() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_Thumbnail() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
bool _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_HasBG() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a4 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::set_HasBG(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::get_HasThumbnail() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a5 + 0)) & 1 != 0;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::SetItem(int32_t Item) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::set_HasThumbnail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_CosmeticInfo.UI_CosmeticInfo_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo::UI_CosmeticInfo_C::ExecuteUbergraph_UI_CosmeticInfo(int32_t EntryPoint) {
    return;
}
