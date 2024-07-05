#include "..\FUObjectArray.hpp"
#include "AREnvironmentCaptureProbe.hpp"
#include "ARSkyLight.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkyLight.hpp"
_Script_AugmentedReality::AREnvironmentCaptureProbe*& _Script_AugmentedReality::ARSkyLight::get_CaptureProbe() {
    return *(_Script_AugmentedReality::AREnvironmentCaptureProbe**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSkyLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSkyLight");
    return result;
}
void _Script_AugmentedReality::ARSkyLight::SetEnvironmentCaptureProbe(_Script_AugmentedReality::AREnvironmentCaptureProbe* InCaptureProbe) {
    return;
}
