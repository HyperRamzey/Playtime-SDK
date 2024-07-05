#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAreaLightActor.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TextureLightProfile.hpp"
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_Mobility() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_LightType() {
    return (void*)((uintptr_t)this + 0x221);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x22c);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_LightShape() {
    return (void*)((uintptr_t)this + 0x222);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_IntensityUnits() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_Dimensions() {
    return (void*)((uintptr_t)this + 0x224);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_Color() {
    return (void*)((uintptr_t)this + 0x234);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_Temperature() {
    return *(float*)((uintptr_t)this + 0x244);
}
_Script_Engine::TextureLightProfile*& _Script_DatasmithContent::DatasmithAreaLightActor::get_IESTexture() {
    return *(_Script_Engine::TextureLightProfile**)((uintptr_t)this + 0x248);
}
bool _Script_DatasmithContent::DatasmithAreaLightActor::get_bUseIESBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithAreaLightActor::set_bUseIESBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_IESBrightnessScale() {
    return *(float*)((uintptr_t)this + 0x254);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_Rotation() {
    return (void*)((uintptr_t)this + 0x258);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0x264);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0x268);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_SpotlightInnerAngle() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_SpotlightOuterAngle() {
    return *(float*)((uintptr_t)this + 0x274);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAreaLightActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAreaLightActor");
    return result;
}
