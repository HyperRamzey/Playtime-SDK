#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapLightEstimationColorTemperatureState.hpp"
float& _Script_MagicLeapLightEstimation::MagicLeapLightEstimationColorTemperatureState::get_ColorTemperatureKelvin() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationColorTemperatureState::get_AmbientColor() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationColorTemperatureState::get_Timestamp() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MagicLeapLightEstimation::MagicLeapLightEstimationColorTemperatureState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState");
    return result;
}
