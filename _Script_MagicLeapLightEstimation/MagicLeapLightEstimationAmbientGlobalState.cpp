#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapLightEstimationAmbientGlobalState.hpp"
void* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationAmbientGlobalState::get_AmbientIntensityNits() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationAmbientGlobalState::get_Timestamp() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationAmbientGlobalState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState");
    return result;
}
