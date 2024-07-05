#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InputBehaviorSet.hpp"
#include "InteractiveGizmo.hpp"
_Script_InteractiveToolsFramework::InputBehaviorSet*& _Script_InteractiveToolsFramework::InteractiveGizmo::get_InputBehaviors() {
    return *(_Script_InteractiveToolsFramework::InputBehaviorSet**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InteractiveGizmo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InteractiveGizmo");
    return result;
}
