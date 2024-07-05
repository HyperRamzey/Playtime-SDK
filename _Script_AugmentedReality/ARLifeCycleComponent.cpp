#include "..\FUObjectArray.hpp"
#include "ARActor.hpp"
#include "ARLifeCycleComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Script_AugmentedReality::ARLifeCycleComponent::get_OnARActorSpawnedDelegate() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_AugmentedReality::ARLifeCycleComponent::get_OnARActorToBeDestroyedDelegate() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARLifeCycleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARLifeCycleComponent");
    return result;
}
void _Script_AugmentedReality::ARLifeCycleComponent::ServerSpawnARActor(void* ComponentClass, _Script_CoreUObject::Guid NativeID) {
    return;
}
void _Script_AugmentedReality::ARLifeCycleComponent::ServerDestroyARActor(_Script_AugmentedReality::ARActor* Actor) {
    return;
}
