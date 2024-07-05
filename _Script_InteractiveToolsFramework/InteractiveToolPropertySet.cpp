#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InteractiveToolPropertySet.hpp"
_Script_InteractiveToolsFramework::InteractiveToolPropertySet*& _Script_InteractiveToolsFramework::InteractiveToolPropertySet::get_CachedProperties() {
    return *(_Script_InteractiveToolsFramework::InteractiveToolPropertySet**)((uintptr_t)this + 0x38);
}
bool _Script_InteractiveToolsFramework::InteractiveToolPropertySet::get_bIsPropertySetEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::InteractiveToolPropertySet::set_bIsPropertySetEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveToolPropertySet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet");
    return result;
}
