#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniAssetBlueprintOutput.hpp"
int32_t& _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintOutput::get_OutputIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintOutput::get_OutputObject() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintOutput");
    return result;
}