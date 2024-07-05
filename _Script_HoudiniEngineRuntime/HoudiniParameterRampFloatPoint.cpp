#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniParameterChoice.hpp"
#include "HoudiniParameterFloat.hpp"
#include "HoudiniParameterRampFloatPoint.hpp"
float& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_Position() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_HoudiniEngineRuntime::HoudiniParameterFloat*& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_ValueParentParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameterFloat**)((uintptr_t)this + 0x40);
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_Value() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_Interpolation() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_InstanceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_HoudiniEngineRuntime::HoudiniParameterFloat*& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_PositionParentParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameterFloat**)((uintptr_t)this + 0x38);
}
_Script_HoudiniEngineRuntime::HoudiniParameterChoice*& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::get_InterpolationParentParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameterChoice**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloatPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloatPoint");
    return result;
}
