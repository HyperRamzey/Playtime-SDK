#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniBakedOutputObjectIdentifier.hpp"
int32_t& _Script_HoudiniEngineRuntime::HoudiniBakedOutputObjectIdentifier::get_PartId() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObjectIdentifier::get_SplitIdentifier() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObjectIdentifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier");
    return result;
}
