#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "GizmoComponentHitTarget.hpp"
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::GizmoComponentHitTarget::get_Component() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoComponentHitTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget");
    return result;
}
