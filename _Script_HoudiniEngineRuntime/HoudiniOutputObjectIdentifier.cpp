#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniOutputObjectIdentifier.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniOutputObjectIdentifier");
    return result;
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_PrimitiveIndex() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_ObjectId() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_PointIndex() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_GeoId() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_PartName() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_PartId() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObjectIdentifier::get_SplitIdentifier() {
    return (void*)((uintptr_t)this + 0x10);
}
