#include "..\FUObjectArray.hpp"
#include "ARActor.hpp"
#include "ARComponent.hpp"
#include "ARTrackedGeometry.hpp"
#include "TrackedGeometryGroup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AugmentedReality::ARActor*& _Script_AugmentedReality::TrackedGeometryGroup::get_ARActor() {
    return *(_Script_AugmentedReality::ARActor**)((uintptr_t)this + 0x0);
}
_Script_AugmentedReality::ARComponent*& _Script_AugmentedReality::TrackedGeometryGroup::get_ARComponent() {
    return *(_Script_AugmentedReality::ARComponent**)((uintptr_t)this + 0x8);
}
_Script_AugmentedReality::ARTrackedGeometry*& _Script_AugmentedReality::TrackedGeometryGroup::get_TrackedGeometry() {
    return *(_Script_AugmentedReality::ARTrackedGeometry**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::TrackedGeometryGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.TrackedGeometryGroup");
    return result;
}
