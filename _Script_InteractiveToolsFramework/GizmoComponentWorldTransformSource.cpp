#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "GizmoBaseTransformSource.hpp"
#include "GizmoComponentWorldTransformSource.hpp"
_Script_Engine::SceneComponent*& _Script_InteractiveToolsFramework::GizmoComponentWorldTransformSource::get_Component() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x48);
}
bool _Script_InteractiveToolsFramework::GizmoComponentWorldTransformSource::get_bModifyComponentOnTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::GizmoComponentWorldTransformSource::set_bModifyComponentOnTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoComponentWorldTransformSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource");
    return result;
}
