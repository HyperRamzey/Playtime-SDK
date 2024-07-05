#include "..\FUObjectArray.hpp"
#include "AREnvironmentCaptureProbeTexture.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TextureCube.hpp"
void* _Script_AugmentedReality::AREnvironmentCaptureProbeTexture::get_Size() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_AugmentedReality::AREnvironmentCaptureProbeTexture::get_TextureType() {
    return (void*)((uintptr_t)this + 0x1d0);
}
float& _Script_AugmentedReality::AREnvironmentCaptureProbeTexture::get_Timestamp() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
void* _Script_AugmentedReality::AREnvironmentCaptureProbeTexture::get_ExternalTextureGuid() {
    return (void*)((uintptr_t)this + 0x1d8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::AREnvironmentCaptureProbeTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture");
    return result;
}
