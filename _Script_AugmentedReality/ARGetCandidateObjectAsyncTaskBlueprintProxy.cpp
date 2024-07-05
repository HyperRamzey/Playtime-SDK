#include "..\FUObjectArray.hpp"
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
#include "ARGetCandidateObjectAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
void* _Script_AugmentedReality::ARGetCandidateObjectAsyncTaskBlueprintProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AugmentedReality::ARGetCandidateObjectAsyncTaskBlueprintProxy::get_OnFailed() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARGetCandidateObjectAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
    return result;
}
_Script_AugmentedReality::ARGetCandidateObjectAsyncTaskBlueprintProxy* _Script_AugmentedReality::ARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Extent) {
    return;
}
