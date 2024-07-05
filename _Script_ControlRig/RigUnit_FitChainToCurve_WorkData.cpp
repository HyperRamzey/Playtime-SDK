#include "..\FUObjectArray.hpp"
#include "RigUnit_FitChainToCurve_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ItemRotationB() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ItemRotationA() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ChainLength() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ItemPositions() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_CachedItems() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ItemSegments() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_CurvePositions() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_CurveSegments() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ItemRotationT() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::get_ItemLocalTransforms() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_FitChainToCurve_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData");
    return result;
}
