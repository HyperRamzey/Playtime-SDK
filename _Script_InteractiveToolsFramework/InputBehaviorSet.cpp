#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InputBehaviorSet.hpp"
void* _Script_InteractiveToolsFramework::InputBehaviorSet::get_Behaviors() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::InputBehaviorSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.InputBehaviorSet");
    return result;
}
