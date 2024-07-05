#include "..\FUObjectArray.hpp"
#include "ARTraceResult.hpp"
#include "ARTraceResultLibrary.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTraceResultLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTraceResultLibrary");
    return result;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTraceResultLibrary::GetLocalToTrackingTransform(_Script_AugmentedReality::ARTraceResult& TraceResult) {
    return;
}
_Script_AugmentedReality::ARTrackedGeometry* _Script_AugmentedReality::ARTraceResultLibrary::GetTrackedGeometry(_Script_AugmentedReality::ARTraceResult& TraceResult) {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTraceResultLibrary::GetLocalTransform(_Script_AugmentedReality::ARTraceResult& TraceResult) {
    return;
}
void* _Script_AugmentedReality::ARTraceResultLibrary::GetTraceChannel(_Script_AugmentedReality::ARTraceResult& TraceResult) {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTraceResultLibrary::GetLocalToWorldTransform(_Script_AugmentedReality::ARTraceResult& TraceResult) {
    return;
}
float _Script_AugmentedReality::ARTraceResultLibrary::GetDistanceFromCamera(_Script_AugmentedReality::ARTraceResult& TraceResult) {
    return;
}
