#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterFolder.hpp"
void _Script_HoudiniEngineRuntime::HoudiniParameterFolder::set_bExpanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x109 + 0);
    *(uint8_t*)((uintptr_t)this + 0x109 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterFolder::get_FolderType() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFolder::get_bExpanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x109 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFolder::get_bChosen() {
    return (*(uint8_t*)((uintptr_t)this + 0x10a + 0)) & 1 != 0;
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterFolder::get_ChildCounter() {
    return *(int32_t*)((uintptr_t)this + 0x10c);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFolder::set_bChosen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10a + 0);
    *(uint8_t*)((uintptr_t)this + 0x10a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFolder::get_bIsContentShown() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFolder::set_bIsContentShown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterFolder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterFolder");
    return result;
}
