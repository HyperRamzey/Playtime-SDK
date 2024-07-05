#include "..\FUObjectArray.hpp"
#include "UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C::ExecuteUbergraph_UI_EarlyAccess_Overlay(int32_t EntryPoint) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C::get_TextBlock_43() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/UI_EarlyAccess_Overlay.UI_EarlyAccess_Overlay_C");
    return result;
}
void _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C::PreConstruct0(bool IsDesignTime) {
    return;
}
