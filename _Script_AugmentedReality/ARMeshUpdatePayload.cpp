#include "..\FUObjectArray.hpp"
#include "ARMeshUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARMeshUpdatePayload::get_SessionPayload() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARMeshUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AugmentedReality::ARMeshUpdatePayload::get_ObjectClassification() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARMeshUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARMeshUpdatePayload");
    return result;
}
