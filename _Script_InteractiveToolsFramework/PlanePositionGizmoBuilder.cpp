#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteractiveGizmoBuilder.hpp"
#include "PlanePositionGizmoBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::PlanePositionGizmoBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder");
    return result;
}
