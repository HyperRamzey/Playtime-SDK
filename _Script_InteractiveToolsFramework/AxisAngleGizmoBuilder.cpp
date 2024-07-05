#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AxisAngleGizmoBuilder.hpp"
#include "InteractiveGizmoBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::AxisAngleGizmoBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder");
    return result;
}
