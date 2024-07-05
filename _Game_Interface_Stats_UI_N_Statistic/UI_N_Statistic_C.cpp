#include "..\FUObjectArray.hpp"
#include "UI_N_Statistic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void* _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::ExecuteUbergraph_UI_N_Statistic(int32_t EntryPoint) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::get_Name() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
void* _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::get_NameIn() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::get_Number() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::get_Value() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Interface_Stats_UI_N_Statistic::UI_N_Statistic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Stats/UI_N_Statistic.UI_N_Statistic_C");
    return result;
}
