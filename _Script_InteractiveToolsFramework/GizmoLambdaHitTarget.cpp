#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GizmoLambdaHitTarget.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::GizmoLambdaHitTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget");
    return result;
}
