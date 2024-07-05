#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeMaterialTextureStreamingInfo.hpp"
float& _Script_Landscape::LandscapeMaterialTextureStreamingInfo::get_TexelFactor() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Landscape::LandscapeMaterialTextureStreamingInfo::get_TextureName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeMaterialTextureStreamingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeMaterialTextureStreamingInfo");
    return result;
}
