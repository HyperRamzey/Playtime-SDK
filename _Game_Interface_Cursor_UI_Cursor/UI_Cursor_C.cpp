#include "..\FUObjectArray.hpp"
#include "UI_Cursor_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_Cursor_UI_Cursor::UI_Cursor_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Cursor_UI_Cursor::UI_Cursor_C::get_Pride() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Cursor_UI_Cursor::UI_Cursor_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Cursor_UI_Cursor::UI_Cursor_C::get_Image_40() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Interface_Cursor_UI_Cursor::UI_Cursor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Cursor/UI_Cursor.UI_Cursor_C");
    return result;
}
void _Game_Interface_Cursor_UI_Cursor::UI_Cursor_C::ExecuteUbergraph_UI_Cursor(int32_t EntryPoint) {
    return;
}
