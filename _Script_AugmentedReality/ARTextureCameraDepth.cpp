#include "..\FUObjectArray.hpp"
#include "ARTexture.hpp"
#include "ARTextureCameraDepth.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARTextureCameraDepth::get_DepthQuality() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_AugmentedReality::ARTextureCameraDepth::get_DepthAccuracy() {
    return (void*)((uintptr_t)this + 0x199);
}
bool _Script_AugmentedReality::ARTextureCameraDepth::get_bIsTemporallySmoothed() {
    return (*(uint8_t*)((uintptr_t)this + 0x19a + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTextureCameraDepth::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTextureCameraDepth");
    return result;
}
void _Script_AugmentedReality::ARTextureCameraDepth::set_bIsTemporallySmoothed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19a + 0);
    *(uint8_t*)((uintptr_t)this + 0x19a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
