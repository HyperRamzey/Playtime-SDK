#include "..\FUObjectArray.hpp"
#include "ARBasicLightEstimate.hpp"
#include "ARLightEstimate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
float _Script_AugmentedReality::ARBasicLightEstimate::GetAmbientIntensityLumens() {
    return;
}
float& _Script_AugmentedReality::ARBasicLightEstimate::get_AmbientIntensityLumens() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_AugmentedReality::ARBasicLightEstimate::get_AmbientColor() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AugmentedReality::ARBasicLightEstimate::get_AmbientColorTemperatureKelvin() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARBasicLightEstimate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARBasicLightEstimate");
    return result;
}
float _Script_AugmentedReality::ARBasicLightEstimate::GetAmbientColorTemperatureKelvin() {
    return;
}
_Script_CoreUObject::LinearColor _Script_AugmentedReality::ARBasicLightEstimate::GetAmbientColor() {
    return;
}
