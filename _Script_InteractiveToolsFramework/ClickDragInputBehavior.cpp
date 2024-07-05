#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnyButtonInputBehavior.hpp"
#include "ClickDragInputBehavior.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::ClickDragInputBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.ClickDragInputBehavior");
    return result;
}
bool _Script_InteractiveToolsFramework::ClickDragInputBehavior::get_bUpdateModifiersDuringDrag() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::ClickDragInputBehavior::set_bUpdateModifiersDuringDrag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
