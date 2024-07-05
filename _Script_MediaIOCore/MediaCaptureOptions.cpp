#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaCaptureOptions.hpp"
void _Script_MediaIOCore::MediaCaptureOptions::set_bConvertToDesiredPixelFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe + 0);
    *(uint8_t*)((uintptr_t)this + 0xe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaIOCore::MediaCaptureOptions::get_Crop() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MediaIOCore::MediaCaptureOptions::get_CustomCapturePoint() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_MediaIOCore::MediaCaptureOptions::get_bResizeSourceBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_MediaIOCore::MediaCaptureOptions::set_bResizeSourceBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaIOCore::MediaCaptureOptions::get_bConvertToDesiredPixelFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0xe + 0)) & 1 != 0;
}
void _Script_MediaIOCore::MediaCaptureOptions::set_bSkipFrameWhenRunningExpensiveTasks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaIOCore::MediaCaptureOptions::get_bSkipFrameWhenRunningExpensiveTasks() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
bool _Script_MediaIOCore::MediaCaptureOptions::get_bForceAlphaToOneOnConversion() {
    return (*(uint8_t*)((uintptr_t)this + 0xf + 0)) & 1 != 0;
}
void _Script_MediaIOCore::MediaCaptureOptions::set_bForceAlphaToOneOnConversion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf + 0);
    *(uint8_t*)((uintptr_t)this + 0xf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaCaptureOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaCaptureOptions");
    return result;
}
