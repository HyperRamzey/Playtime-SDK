#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnyButtonInputBehavior.hpp"
#include "SingleClickInputBehavior.hpp"
bool _Script_InteractiveToolsFramework::SingleClickInputBehavior::get_HitTestOnRelease() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::SingleClickInputBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.SingleClickInputBehavior");
    return result;
}
void _Script_InteractiveToolsFramework::SingleClickInputBehavior::set_HitTestOnRelease(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
