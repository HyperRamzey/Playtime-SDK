#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapPlaneResult.hpp"
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_InnerID() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_PlanePosition() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPlaneResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapPlanes.MagicLeapPlaneResult");
    return result;
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_PlaneFlags() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_PlaneOrientation() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_ContentOrientation() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_PlaneDimensions() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_MagicLeapPlanes::MagicLeapPlaneResult::get_ID() {
    return (void*)((uintptr_t)this + 0x40);
}
