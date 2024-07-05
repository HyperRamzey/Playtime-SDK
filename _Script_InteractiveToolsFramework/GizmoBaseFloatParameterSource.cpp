#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoBaseFloatParameterSource.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoBaseFloatParameterSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource");
    return result;
}
