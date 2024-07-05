#include "..\FUObjectArray.hpp"
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
#include "GetGeoLocationAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
void* _Script_AugmentedReality::GetGeoLocationAsyncTaskBlueprintProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_AugmentedReality::GetGeoLocationAsyncTaskBlueprintProxy* _Script_AugmentedReality::GetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& WorldPosition) {
    return;
}
void* _Script_AugmentedReality::GetGeoLocationAsyncTaskBlueprintProxy::get_OnFailed() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::GetGeoLocationAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy");
    return result;
}
