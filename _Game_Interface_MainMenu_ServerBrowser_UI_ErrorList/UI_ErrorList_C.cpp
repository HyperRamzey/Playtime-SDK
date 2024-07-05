#include "..\FUObjectArray.hpp"
#include "UI_ErrorList_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\InvalidationBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
_Script_UMG::InvalidationBox*& _Game_Interface_MainMenu_ServerBrowser_UI_ErrorList::UI_ErrorList_C::get_InvalidationBox_1() {
    return *(_Script_UMG::InvalidationBox**)((uintptr_t)this + 0x260);
}
_Script_UMG::VerticalBox*& _Game_Interface_MainMenu_ServerBrowser_UI_ErrorList::UI_ErrorList_C::get_VerticalBox_45() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_ErrorList::UI_ErrorList_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_ErrorList.UI_ErrorList_C");
    return result;
}
