#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScrollBoxWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
_Script_CoreUObject::Class* _Script_Slate::ScrollBoxWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.ScrollBoxWidgetStyle");
    return result;
}
void* _Script_Slate::ScrollBoxWidgetStyle::get_ScrollBoxStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
