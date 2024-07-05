#include "..\FUObjectArray.hpp"
#include "ARMeshGeometry.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARMeshGeometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARMeshGeometry");
    return result;
}
bool _Script_AugmentedReality::ARMeshGeometry::GetObjectClassificationAtLocation(_Script_CoreUObject::Vector& InWorldLocation, void*& OutClassification, _Script_CoreUObject::Vector& OutClassificationLocation, float MaxLocationDiff) {
    return;
}
