#include "..\FUObjectArray.hpp"
#include "UI_ActionPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_Prefix() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_Core() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_Button() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_Left() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_ActionPrompt.UI_ActionPrompt_C");
    return result;
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_Right() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::get_Suffix() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
void _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::Construct0() {
    return;
}
void _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::SetPromptText(void* Prefix, void* Suffix) {
    return;
}
void _Game_Interface_HUDComponents_UI_ActionPrompt::UI_ActionPrompt_C::ExecuteUbergraph_UI_ActionPrompt(int32_t EntryPoint) {
    return;
}
