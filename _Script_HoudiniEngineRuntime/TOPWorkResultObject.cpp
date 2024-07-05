#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TOPWorkResultObject.hpp"
void* _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_OutputActorOwner() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_FilePath() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_State() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_HoudiniEngineRuntime::TOPWorkResultObject::set_bAutoBakedSinceLastLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_WorkItemResultInfoIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_ResultOutputs() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_HoudiniEngineRuntime::TOPWorkResultObject::get_bAutoBakedSinceLastLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::TOPWorkResultObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.TOPWorkResultObject");
    return result;
}
