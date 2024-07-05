#include "..\FUObjectArray.hpp"
#include "CRSimContainer.hpp"
#include "CRSimPointContainer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::CRSimPointContainer::get_Points() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::CRSimPointContainer::get_Constraints() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_ControlRig::CRSimPointContainer::get_Springs() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::CRSimPointContainer::get_Forces() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::CRSimPointContainer::get_CollisionVolumes() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::CRSimPointContainer::get_PreviousStep() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimPointContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimPointContainer");
    return result;
}
