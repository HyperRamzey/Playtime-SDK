#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapPlaneBoundary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPlaneBoundary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapPlanes.MagicLeapPlaneBoundary");
    return result;
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneBoundary::get_Polygon() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneBoundary::get_Holes() {
    return (void*)((uintptr_t)this + 0x10);
}
