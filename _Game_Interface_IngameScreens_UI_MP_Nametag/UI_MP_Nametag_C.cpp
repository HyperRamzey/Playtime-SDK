#include "..\FUObjectArray.hpp"
#include "UI_MP_Nametag_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_MP_Nametag.UI_MP_Nametag_C");
    return result;
}
void* _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::get_Tag() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::get_Dot() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::get_Name() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
void _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::SetName(void* UserName) {
    return;
}
void _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::UpdateVisibility() {
    return;
}
void _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::SetColor(_Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_MP_Nametag::UI_MP_Nametag_C::ExecuteUbergraph_UI_MP_Nametag(int32_t EntryPoint) {
    return;
}
