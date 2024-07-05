#include "..\FUObjectArray.hpp"
#include "UI_StatisticCategory_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Stats/UI_StatisticCategory.UI_StatisticCategory_C");
    return result;
}
void* _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::Construct0() {
    return;
}
void* _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::get_Category() {
    return (void*)((uintptr_t)this + 0x270);
}
void _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::Refresh() {
    return;
}
void _Game_Interface_Stats_UI_StatisticCategory::UI_StatisticCategory_C::ExecuteUbergraph_UI_StatisticCategory(int32_t EntryPoint) {
    return;
}
