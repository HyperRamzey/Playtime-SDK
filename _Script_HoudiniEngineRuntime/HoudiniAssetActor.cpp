#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "HoudiniAssetActor.hpp"
#include "HoudiniAssetComponent.hpp"
_Script_HoudiniEngineRuntime::HoudiniAssetComponent*& _Script_HoudiniEngineRuntime::HoudiniAssetActor::get_HoudiniAssetComponent() {
    return *(_Script_HoudiniEngineRuntime::HoudiniAssetComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetActor");
    return result;
}
