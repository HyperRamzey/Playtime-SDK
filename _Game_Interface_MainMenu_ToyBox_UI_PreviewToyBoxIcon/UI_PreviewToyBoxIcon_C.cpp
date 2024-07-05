#include "..\FUObjectArray.hpp"
#include "UI_PreviewToyBoxIcon_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ToyBox/UI_PreviewToyBoxIcon.UI_PreviewToyBoxIcon_C");
    return result;
}
void* _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C::ExecuteUbergraph_UI_PreviewToyBoxIcon(int32_t EntryPoint) {
    return;
}
