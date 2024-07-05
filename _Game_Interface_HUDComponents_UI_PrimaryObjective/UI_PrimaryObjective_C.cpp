#include "..\FUObjectArray.hpp"
#include "UI_PrimaryObjective_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C::get_CheckBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C::get_ProgressLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C::get_checkmark() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C::get_NotifBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C::get_ObjectiveLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_PrimaryObjective::UI_PrimaryObjective_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_PrimaryObjective.UI_PrimaryObjective_C");
    return result;
}
