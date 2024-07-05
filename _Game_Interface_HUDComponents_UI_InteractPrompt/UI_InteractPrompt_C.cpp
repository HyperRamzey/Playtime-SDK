#include "..\FUObjectArray.hpp"
#include "UI_InteractPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::ExecuteUbergraph_UI_InteractPrompt(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::get_Image_194() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::get_Image_394() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::get_TextBlock_310() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Overlay*& _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::get_UI_HitHatch() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_InteractPrompt.UI_InteractPrompt_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_InteractPrompt::UI_InteractPrompt_C::SetPrompt(void* DataTableRowName) {
    return;
}
