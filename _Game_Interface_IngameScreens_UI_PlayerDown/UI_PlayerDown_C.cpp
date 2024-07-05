#include "..\FUObjectArray.hpp"
#include "UI_PlayerDown_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_Name() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_PlayerDown.UI_PlayerDown_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_RightFade_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_Core_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_ReviveIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::get_LeftFade_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_PlayerDown::UI_PlayerDown_C::ExecuteUbergraph_UI_PlayerDown(int32_t EntryPoint) {
    return;
}
