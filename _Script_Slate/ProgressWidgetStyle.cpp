#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProgressWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
_Script_CoreUObject::Class* _Script_Slate::ProgressWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.ProgressWidgetStyle");
    return result;
}
void* _Script_Slate::ProgressWidgetStyle::get_ProgressBarStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
