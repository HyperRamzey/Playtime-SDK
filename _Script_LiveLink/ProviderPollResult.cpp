#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProviderPollResult.hpp"
void* _Script_LiveLink::ProviderPollResult::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLink::ProviderPollResult::get_MachineName() {
    return (void*)((uintptr_t)this + 0x20);
}
double& _Script_LiveLink::ProviderPollResult::get_MachineTimeOffset() {
    return *(double*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_LiveLink::ProviderPollResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.ProviderPollResult");
    return result;
}
