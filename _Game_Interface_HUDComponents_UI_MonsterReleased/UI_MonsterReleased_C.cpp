#include "..\FUObjectArray.hpp"
#include "UI_MonsterReleased_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::ExecuteUbergraph_UI_MonsterReleased(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::get_Monster() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::get_Play() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::RemoveSelf() {
    return;
}
void _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::get_Image_37() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::get_TextBlock_116() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_MonsterReleased::UI_MonsterReleased_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_MonsterReleased.UI_MonsterReleased_C");
    return result;
}
