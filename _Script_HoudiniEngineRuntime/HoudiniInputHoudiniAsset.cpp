#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputHoudiniAsset.hpp"
#include "HoudiniInputObject.hpp"
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputHoudiniAsset::get_AssetOutputIndex() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputHoudiniAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniAsset");
    return result;
}
