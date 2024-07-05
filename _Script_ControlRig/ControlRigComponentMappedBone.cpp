#include "..\FUObjectArray.hpp"
#include "ControlRigComponentMappedBone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigComponentMappedBone::get_Source() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::ControlRigComponentMappedBone::get_Target() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigComponentMappedBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigComponentMappedBone");
    return result;
}
