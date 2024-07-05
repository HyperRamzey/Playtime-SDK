#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FileMediaOutput.hpp"
#include "MediaOutput.hpp"
void* _Script_MediaIOCore::FileMediaOutput::get_WriteOptions() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MediaIOCore::FileMediaOutput::get_FilePath() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_MediaIOCore::FileMediaOutput::get_BaseFileName() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_MediaIOCore::FileMediaOutput::get_bOverridePixelFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
bool _Script_MediaIOCore::FileMediaOutput::get_bOverrideDesiredSize() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_MediaIOCore::FileMediaOutput::set_bOverrideDesiredSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaIOCore::FileMediaOutput::get_DesiredSize() {
    return (void*)((uintptr_t)this + 0xb4);
}
void _Script_MediaIOCore::FileMediaOutput::set_bOverridePixelFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaIOCore::FileMediaOutput::get_DesiredPixelFormat() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::FileMediaOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaIOCore.FileMediaOutput");
    return result;
}
