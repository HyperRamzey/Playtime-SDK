#include "..\FUObjectArray.hpp"
#include "ARTexture.hpp"
#include "ARTextureCameraImage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTextureCameraImage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTextureCameraImage");
    return result;
}
