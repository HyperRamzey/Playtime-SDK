#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TransformProxy.hpp"
bool _Script_InteractiveToolsFramework::TransformProxy::get_bRotatePerObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::TransformProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.TransformProxy");
    return result;
}
void _Script_InteractiveToolsFramework::TransformProxy::set_bRotatePerObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::TransformProxy::get_bSetPivotMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::TransformProxy::get_InitialSharedTransform() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_InteractiveToolsFramework::TransformProxy::set_bSetPivotMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_InteractiveToolsFramework::TransformProxy::get_SharedTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
