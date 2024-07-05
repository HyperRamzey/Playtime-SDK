#include "..\FUObjectArray.hpp"
#include "UI_ScoreboardHeader_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_Column_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_Column() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_TicketIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_Column_2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_Column1Text() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::get_Column2Text() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_ScoreboardHeader.UI_ScoreboardHeader_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_ScoreboardHeader::UI_ScoreboardHeader_C::ExecuteUbergraph_UI_ScoreboardHeader(int32_t EntryPoint) {
    return;
}
