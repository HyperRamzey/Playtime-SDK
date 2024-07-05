#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteractiveGizmoBuilder.hpp"
#include "IntervalGizmoBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::IntervalGizmoBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder");
    return result;
}
