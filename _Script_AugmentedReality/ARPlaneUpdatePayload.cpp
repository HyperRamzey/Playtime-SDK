#include "..\FUObjectArray.hpp"
#include "ARPlaneUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARPlaneUpdatePayload::get_SessionPayload() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARPlaneUpdatePayload::get_Extents() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_AugmentedReality::ARPlaneUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AugmentedReality::ARPlaneUpdatePayload::get_ObjectClassification() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_AugmentedReality::ARPlaneUpdatePayload::get_BoundaryVertices() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AugmentedReality::ARPlaneUpdatePayload::get_Center() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPlaneUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARPlaneUpdatePayload");
    return result;
}
