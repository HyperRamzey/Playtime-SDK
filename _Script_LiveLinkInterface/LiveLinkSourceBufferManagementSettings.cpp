#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSourceBufferManagementSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_DetectedFrameRate() {
    return (void*)((uintptr_t)this + 0x1c);
}
bool _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_bGenerateSubFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_bValidEngineTimeEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::set_bValidEngineTimeEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
double& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_EngineTimeClockOffset() {
    return *(double*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_SourceTimecodeFrameRate() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_ValidEngineTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_EngineTimeOffset() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::set_bGenerateSubFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_bUseTimecodeSmoothLatest() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::set_bUseTimecodeSmoothLatest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_bValidTimecodeFrameEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::set_bValidTimecodeFrameEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_ValidTimecodeFrame() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_TimecodeFrameOffset() {
    return *(float*)((uintptr_t)this + 0x38);
}
double& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_TimecodeClockOffset() {
    return *(double*)((uintptr_t)this + 0x40);
}
int32_t& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_LatestOffset() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
int32_t& _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_MaxNumberOfFrameToBuffered() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
bool _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::get_bKeepAtLeastOneFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::set_bKeepAtLeastOneFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSourceBufferManagementSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings");
    return result;
}
