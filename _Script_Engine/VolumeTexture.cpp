#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "VolumeTexture.hpp"
_Script_CoreUObject::Class* _Script_Engine::VolumeTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VolumeTexture");
    return result;
}