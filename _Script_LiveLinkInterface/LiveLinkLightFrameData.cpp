#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkLightFrameData.hpp"
#include "LiveLinkTransformFrameData.hpp"
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0xe4);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_Intensity() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_Temperature() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_SoftSourceRadius() {
    return *(float*)((uintptr_t)this + 0xec);
}
void* _Script_LiveLinkInterface::LiveLinkLightFrameData::get_LightColor() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_InnerConeAngle() {
    return *(float*)((uintptr_t)this + 0xdc);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_LiveLinkInterface::LiveLinkLightFrameData::get_OuterConeAngle() {
    return *(float*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkLightFrameData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkLightFrameData");
    return result;
}
