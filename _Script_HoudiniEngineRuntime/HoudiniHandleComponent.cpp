#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "HoudiniHandleComponent.hpp"
#include "HoudiniHandleParameter.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniHandleComponent::get_XformParms() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniHandleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent");
    return result;
}
void* _Script_HoudiniEngineRuntime::HoudiniHandleComponent::get_HandleType() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_HoudiniEngineRuntime::HoudiniHandleParameter*& _Script_HoudiniEngineRuntime::HoudiniHandleComponent::get_RSTParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniHandleParameter**)((uintptr_t)this + 0x208);
}
void* _Script_HoudiniEngineRuntime::HoudiniHandleComponent::get_HandleName() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_HoudiniEngineRuntime::HoudiniHandleParameter*& _Script_HoudiniEngineRuntime::HoudiniHandleComponent::get_RotOrderParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniHandleParameter**)((uintptr_t)this + 0x210);
}
