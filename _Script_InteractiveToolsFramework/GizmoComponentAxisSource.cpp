#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "GizmoComponentAxisSource.hpp"
_Script_Engine::SceneComponent*& _Script_InteractiveToolsFramework::GizmoComponentAxisSource::get_Component() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x30);
}
int32_t& _Script_InteractiveToolsFramework::GizmoComponentAxisSource::get_AxisIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
bool _Script_InteractiveToolsFramework::GizmoComponentAxisSource::get_bLocalAxes() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoComponentAxisSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource");
    return result;
}
void _Script_InteractiveToolsFramework::GizmoComponentAxisSource::set_bLocalAxes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
