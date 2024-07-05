#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InputBehaviorSet.hpp"
#include "InputRouter.hpp"
bool _Script_InteractiveToolsFramework::InputRouter::get_bAutoInvalidateOnHover() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InputRouter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InputRouter");
    return result;
}
void _Script_InteractiveToolsFramework::InputRouter::set_bAutoInvalidateOnHover(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::InputRouter::get_bAutoInvalidateOnCapture() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::InputRouter::set_bAutoInvalidateOnCapture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_InteractiveToolsFramework::InputBehaviorSet*& _Script_InteractiveToolsFramework::InputRouter::get_ActiveInputBehaviors() {
    return *(_Script_InteractiveToolsFramework::InputBehaviorSet**)((uintptr_t)this + 0x38);
}
