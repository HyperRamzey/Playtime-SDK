#include "..\FUObjectArray.hpp"
#include "RigPoseElement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigPoseElement::get_Index() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigPoseElement::get_GlobalTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigPoseElement::get_LocalTransform() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_ControlRig::RigPoseElement::get_CurveValue() {
    return *(float*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigPoseElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigPoseElement");
    return result;
}
