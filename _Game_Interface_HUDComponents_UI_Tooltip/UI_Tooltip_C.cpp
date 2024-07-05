#include "..\FUObjectArray.hpp"
#include "UI_Tooltip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::OnTooltipConstructed__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::get_Image_130() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::get_T_Tooltip() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::Get_T_Tooltip_Text_0() {
    return;
}
void* _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::get_Tooltip() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::SetupTooltip(void* Tooltip) {
    return;
}
void* _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::get_OnTooltipConstructed() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_Tooltip.UI_Tooltip_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::Construct0() {
    return;
}
void _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C::ExecuteUbergraph_UI_Tooltip(int32_t EntryPoint) {
    return;
}
