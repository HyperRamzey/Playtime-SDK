#include "..\FUObjectArray.hpp"
#include "ARTrackedGeometry.hpp"
#include "ARTrackedPoint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedPoint");
    return result;
}
