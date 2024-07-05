#include "..\FUObjectArray.hpp"
#include "UI_Heart_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::ExecuteUbergraph_UI_Heart(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::get_A_LoseHeart() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::get_HeartIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::LoseHeart() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/UI_Heart.UI_Heart_C");
    return result;
}
void _Game_Interface_HUDComponents_UI_Heart::UI_Heart_C::PreConstruct0(bool IsDesignTime) {
    return;
}
