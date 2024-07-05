#include "..\FUObjectArray.hpp"
#include "BPC_Tooltip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\TooltipComponent.hpp"
void _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::set_ShowNonEssentialHUD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::get_ShowNonEssentialHUD() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void* _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Class* _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/BPC_Tooltip.BPC_Tooltip_C");
    return result;
}
void _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::SetNonEssentialHUDVisibility(bool Visible) {
    return;
}
void _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::ShowTooltip0(bool Value) {
    return;
}
void _Game_Interface_BPC_Tooltip::BPC_Tooltip_C::ExecuteUbergraph_BPC_Tooltip(int32_t EntryPoint) {
    return;
}
