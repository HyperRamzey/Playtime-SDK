#include "..\FUObjectArray.hpp"
#include "..\_Script_AugmentedReality\ARBasicLightEstimate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LuminARLightEstimate.hpp"
void* _Script_MagicLeapAR::LuminARLightEstimate::get_AmbientIntensityNits() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminARLightEstimate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminARLightEstimate");
    return result;
}
void* _Script_MagicLeapAR::LuminARLightEstimate::GetAmbientIntensityNits() {
    return;
}
