#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AxisPositionGizmoBuilder.hpp"
#include "InteractiveGizmoBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::AxisPositionGizmoBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder");
    return result;
}
