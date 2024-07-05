#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GizmoActor.hpp"
#include "InternalToolFrameworkActor.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoActor");
    return result;
}
