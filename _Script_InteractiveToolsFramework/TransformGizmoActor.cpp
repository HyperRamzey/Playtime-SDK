#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "GizmoActor.hpp"
#include "TransformGizmoActor.hpp"
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_TranslateXZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_TranslateZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_TranslateX() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x220);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_RotateY() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_TranslateY() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_TranslateYZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_TranslateXY() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_RotateX() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_RotateZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_UniformScale() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_PlaneScaleYZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x288);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_AxisScaleX() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_AxisScaleY() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_AxisScaleZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x280);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_PlaneScaleXZ() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x290);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::TransformGizmoActor::get_PlaneScaleXY() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x298);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::TransformGizmoActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.TransformGizmoActor");
    return result;
}
