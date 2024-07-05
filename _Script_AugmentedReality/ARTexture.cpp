#include "..\FUObjectArray.hpp"
#include "ARTexture.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
void* _Script_AugmentedReality::ARTexture::get_TextureType() {
    return (void*)((uintptr_t)this + 0x178);
}
float& _Script_AugmentedReality::ARTexture::get_Timestamp() {
    return *(float*)((uintptr_t)this + 0x17c);
}
void* _Script_AugmentedReality::ARTexture::get_ExternalTextureGuid() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_AugmentedReality::ARTexture::get_Size() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTexture");
    return result;
}
