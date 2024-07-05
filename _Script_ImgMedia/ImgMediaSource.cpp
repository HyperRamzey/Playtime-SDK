#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "ImgMediaSource.hpp"
#include "..\_Script_MediaAssets\BaseMediaSource.hpp"
void _Script_ImgMedia::ImgMediaSource::set_IsPathRelativeToProjectRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ImgMedia::ImgMediaSource::get_IsPathRelativeToProjectRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_ImgMedia::ImgMediaSource::get_FrameRateOverride() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_ImgMedia::ImgMediaSource::get_ProxyOverride() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_ImgMedia::ImgMediaSource::RemoveGlobalCamera(_Script_Engine::Actor* InActor) {
    return;
}
void* _Script_ImgMedia::ImgMediaSource::get_SequencePath() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_ImgMedia::ImgMediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ImgMedia.ImgMediaSource");
    return result;
}
void _Script_ImgMedia::ImgMediaSource::SetMipLevelDistance(float Distance) {
    return;
}
void _Script_ImgMedia::ImgMediaSource::SetSequencePath(void* Path) {
    return;
}
void _Script_ImgMedia::ImgMediaSource::RemoveTargetObject(_Script_Engine::Actor* InActor) {
    return;
}
void* _Script_ImgMedia::ImgMediaSource::GetSequencePath() {
    return;
}
void _Script_ImgMedia::ImgMediaSource::AddGlobalCamera(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_ImgMedia::ImgMediaSource::GetProxies(void*& OutProxies) {
    return;
}
void _Script_ImgMedia::ImgMediaSource::AddTargetObject(_Script_Engine::Actor* InActor, float Width) {
    return;
}
