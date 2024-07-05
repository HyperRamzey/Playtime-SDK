#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAreaLightActorTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_LightType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Dimensions() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_LightShape() {
    return (void*)((uintptr_t)this + 0x31);
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Color() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_IntensityUnits() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Temperature() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_IESTexture() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_bUseIESBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithAreaLightActorTemplate::set_bUseIESBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_IESBrightnessScale() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Rotation() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate");
    return result;
}
