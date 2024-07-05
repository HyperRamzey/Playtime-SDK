#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BehaviorInfo.hpp"
#include "InputBehavior.hpp"
_Script_InteractiveToolsFramework::InputBehavior*& _Script_InteractiveToolsFramework::BehaviorInfo::get_Behavior() {
    return *(_Script_InteractiveToolsFramework::InputBehavior**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::BehaviorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/InteractiveToolsFramework.BehaviorInfo");
    return result;
}
