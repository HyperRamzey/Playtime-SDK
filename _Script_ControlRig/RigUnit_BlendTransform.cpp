#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_BlendTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BlendTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BlendTransform");
    return result;
}
void* _Script_ControlRig::RigUnit_BlendTransform::get_Source() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_BlendTransform::get_Targets() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_BlendTransform::get_Result() {
    return (void*)((uintptr_t)this + 0x50);
}
