#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkCameraFrameData.hpp"
#include "LiveLinkTransformFrameData.hpp"
float& _Script_LiveLinkInterface::LiveLinkCameraFrameData::get_FieldOfView() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_LiveLinkInterface::LiveLinkCameraFrameData::get_FocalLength() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_LiveLinkInterface::LiveLinkCameraFrameData::get_AspectRatio() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_LiveLinkInterface::LiveLinkCameraFrameData::get_Aperture() {
    return *(float*)((uintptr_t)this + 0xdc);
}
float& _Script_LiveLinkInterface::LiveLinkCameraFrameData::get_FocusDistance() {
    return *(float*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkCameraFrameData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkCameraFrameData");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkCameraFrameData::get_ProjectionMode() {
    return (void*)((uintptr_t)this + 0xe4);
}
