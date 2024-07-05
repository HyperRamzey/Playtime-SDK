#include "..\FUObjectArray.hpp"
#include "AnimNode_ControlRigInputPose.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_ControlRig::AnimNode_ControlRigInputPose::get_InputPose() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::AnimNode_ControlRigInputPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.AnimNode_ControlRigInputPose");
    return result;
}
