#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoBaseTransformSource.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoBaseTransformSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource");
    return result;
}
