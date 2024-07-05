#include "..\FUObjectArray.hpp"
#include "AREnvironmentProbeUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::AREnvironmentProbeUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::AREnvironmentProbeUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload");
    return result;
}
