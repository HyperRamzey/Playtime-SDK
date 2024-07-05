#include "..\FUObjectArray.hpp"
#include "AnimNode_ControlRigBase.hpp"
#include "AnimNode_ControlRig_ExternalSource.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::AnimNode_ControlRig_ExternalSource::get_ControlRig() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_ControlRig::AnimNode_ControlRig_ExternalSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.AnimNode_ControlRig_ExternalSource");
    return result;
}
