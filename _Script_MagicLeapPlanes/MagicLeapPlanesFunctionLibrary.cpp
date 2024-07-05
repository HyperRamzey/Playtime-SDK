#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapPlaneResult.hpp"
#include "MagicLeapPlanesFunctionLibrary.hpp"
#include "MagicLeapPlanesQuery.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
    return result;
}
void _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(void*& InQueryFlags, void*& InResultFlags, void*& OutFlags) {
    return;
}
void _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(void*& InPriority, void*& InFlagsToReorder, void*& OutReorderedFlags) {
    return;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::IsTrackerValid() {
    return;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::RemovePersistentQuery(_Script_CoreUObject::Guid Handle) {
    return;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(_Script_MagicLeapPlanes::MagicLeapPlanesQuery& Query, void*& ResultDelegate) {
    return;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::PlanesPersistentQueryBeginAsync(_Script_MagicLeapPlanes::MagicLeapPlanesQuery& Query, _Script_CoreUObject::Guid& Handle, void*& ResultDelegate) {
    return;
}
_Script_CoreUObject::Transform _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::GetContentScale(_Script_Engine::Actor* ContentActor, _Script_MagicLeapPlanes::MagicLeapPlaneResult& PlaneResult) {
    return;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::DestroyTracker() {
    return;
}
bool _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::CreateTracker() {
    return;
}
_Script_CoreUObject::Guid _Script_MagicLeapPlanes::MagicLeapPlanesFunctionLibrary::AddPersistentQuery(void* PersistentQueryType) {
    return;
}
