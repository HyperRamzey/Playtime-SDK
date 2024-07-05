#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoBaseTransformSource.hpp"
#include "GizmoTransformProxyTransformSource.hpp"
#include "TransformProxy.hpp"
_Script_InteractiveToolsFramework::TransformProxy*& _Script_InteractiveToolsFramework::GizmoTransformProxyTransformSource::get_Proxy() {
    return *(_Script_InteractiveToolsFramework::TransformProxy**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoTransformProxyTransformSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource");
    return result;
}
