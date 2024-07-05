#include "..\FUObjectArray.hpp"
#include "ARCandidateObject.hpp"
#include "ARTrackedGeometry.hpp"
#include "ARTrackedObject.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AugmentedReality::ARCandidateObject*& _Script_AugmentedReality::ARTrackedObject::get_DetectedObject() {
    return *(_Script_AugmentedReality::ARCandidateObject**)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedObject");
    return result;
}
_Script_AugmentedReality::ARCandidateObject* _Script_AugmentedReality::ARTrackedObject::GetDetectedObject() {
    return;
}
