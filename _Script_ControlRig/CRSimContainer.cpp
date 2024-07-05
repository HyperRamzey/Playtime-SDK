#include "..\FUObjectArray.hpp"
#include "CRSimContainer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::CRSimContainer::get_AccumulatedTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::CRSimContainer::get_TimeStep() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::CRSimContainer::get_TimeLeftForStep() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimContainer");
    return result;
}
