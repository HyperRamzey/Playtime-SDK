#include "..\FUObjectArray.hpp"
#include "AREnvironmentCaptureProbe.hpp"
#include "AREnvironmentCaptureProbeTexture.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::AREnvironmentCaptureProbe::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.AREnvironmentCaptureProbe");
    return result;
}
void* _Script_AugmentedReality::AREnvironmentCaptureProbe::get_Extent() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_AugmentedReality::AREnvironmentCaptureProbeTexture*& _Script_AugmentedReality::AREnvironmentCaptureProbe::get_EnvironmentCaptureTexture() {
    return *(_Script_AugmentedReality::AREnvironmentCaptureProbeTexture**)((uintptr_t)this + 0x108);
}
_Script_AugmentedReality::AREnvironmentCaptureProbeTexture* _Script_AugmentedReality::AREnvironmentCaptureProbe::GetEnvironmentCaptureTexture() {
    return;
}
_Script_CoreUObject::Vector _Script_AugmentedReality::AREnvironmentCaptureProbe::GetExtent() {
    return;
}
