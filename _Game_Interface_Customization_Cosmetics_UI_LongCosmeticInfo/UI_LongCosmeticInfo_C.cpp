#include "..\FUObjectArray.hpp"
#include "UI_LongCosmeticInfo_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_BackgroundGradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_ItemName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_ThumbnailBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_RaritySlot() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_RarityText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_Thumbnail() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Overlay*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_ThumbnailContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::get_TypeText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Script_CoreUObject::Class* _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Customization/Cosmetics/UI_LongCosmeticInfo.UI_LongCosmeticInfo_C");
    return result;
}
void _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::SetVisualsLongCosmeticInfo(int32_t ItemId) {
    return;
}
void _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C::ExecuteUbergraph_UI_LongCosmeticInfo(int32_t EntryPoint) {
    return;
}
