#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniParameterChoice.hpp"
#include "HoudiniParameterColor.hpp"
#include "HoudiniParameterFloat.hpp"
#include "HoudiniParameterRampColorPoint.hpp"
float& _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_Position() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_Value() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_Interpolation() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_HoudiniEngineRuntime::HoudiniParameterChoice*& _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_InterpolationParentParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameterChoice**)((uintptr_t)this + 0x58);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_InstanceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_HoudiniEngineRuntime::HoudiniParameterFloat*& _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_PositionParentParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameterFloat**)((uintptr_t)this + 0x48);
}
_Script_HoudiniEngineRuntime::HoudiniParameterColor*& _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::get_ValueParentParm() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameterColor**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterRampColorPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColorPoint");
    return result;
}
