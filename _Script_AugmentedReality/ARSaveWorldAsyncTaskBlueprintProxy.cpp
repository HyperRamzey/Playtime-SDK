#include "..\FUObjectArray.hpp"
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
#include "ARSaveWorldAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AugmentedReality::ARSaveWorldAsyncTaskBlueprintProxy* _Script_AugmentedReality::ARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_AugmentedReality::ARSaveWorldAsyncTaskBlueprintProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AugmentedReality::ARSaveWorldAsyncTaskBlueprintProxy::get_OnFailed() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSaveWorldAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
    return result;
}
