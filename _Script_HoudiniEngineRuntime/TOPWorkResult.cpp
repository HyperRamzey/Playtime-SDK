#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TOPWorkResult.hpp"
int32_t& _Script_HoudiniEngineRuntime::TOPWorkResult::get_WorkItemIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_HoudiniEngineRuntime::TOPWorkResult::get_ResultObjects() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_HoudiniEngineRuntime::TOPWorkResult::get_WorkItemID() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::TOPWorkResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.TOPWorkResult");
    return result;
}
