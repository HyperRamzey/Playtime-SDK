#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoBaseVec2ParameterSource.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoBaseVec2ParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
    return result;
}
