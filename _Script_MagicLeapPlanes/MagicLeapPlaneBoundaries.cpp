#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapPlaneBoundaries.hpp"
void* _Script_MagicLeapPlanes::MagicLeapPlaneBoundaries::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneBoundaries::get_Boundaries() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPlaneBoundaries::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapPlanes.MagicLeapPlaneBoundaries");
    return result;
}
