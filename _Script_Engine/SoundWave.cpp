#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveTable.hpp"
#include "SoundBase.hpp"
#include "SoundWave.hpp"
void _Script_Engine::SoundWave::set_bStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17b + 0);
    *(uint8_t*)((uintptr_t)this + 0x17b + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SoundWave::get_bStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x17b + 0)) & 2 != 0;
}
_Script_Engine::CurveTable*& _Script_Engine::SoundWave::get_InternalCurves() {
    return *(_Script_Engine::CurveTable**)((uintptr_t)this + 0x288);
}
void* _Script_Engine::SoundWave::get_SampleRateQuality() {
    return (void*)((uintptr_t)this + 0x178);
}
int32_t& _Script_Engine::SoundWave::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::SoundWave::get_SoundGroup() {
    return (void*)((uintptr_t)this + 0x17a);
}
int32_t& _Script_Engine::SoundWave::get_StreamingPriority() {
    return *(int32_t*)((uintptr_t)this + 0x174);
}
bool _Script_Engine::SoundWave::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x17b + 0)) & 1 != 0;
}
void _Script_Engine::SoundWave::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17b + 0);
    *(uint8_t*)((uintptr_t)this + 0x17b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundWave::get_bSeekableStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x17b + 0)) & 4 != 0;
}
void _Script_Engine::SoundWave::set_bSeekableStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17b + 0);
    *(uint8_t*)((uintptr_t)this + 0x17b + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::SoundWave::get_LoadingBehavior() {
    return (void*)((uintptr_t)this + 0x17c);
}
bool _Script_Engine::SoundWave::get_bMature() {
    return (*(uint8_t*)((uintptr_t)this + 0x17d + 0)) & 64 != 0;
}
_Script_Engine::CurveTable*& _Script_Engine::SoundWave::get_Curves() {
    return *(_Script_Engine::CurveTable**)((uintptr_t)this + 0x280);
}
void _Script_Engine::SoundWave::set_bMature(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17d + 0);
    *(uint8_t*)((uintptr_t)this + 0x17d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SoundWave::get_bManualWordWrap() {
    return (*(uint8_t*)((uintptr_t)this + 0x17d + 0)) & 128 != 0;
}
int32_t& _Script_Engine::SoundWave::get_NumChannels() {
    return *(int32_t*)((uintptr_t)this + 0x25c);
}
void _Script_Engine::SoundWave::set_bManualWordWrap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17d + 0);
    *(uint8_t*)((uintptr_t)this + 0x17d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::SoundWave::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x258);
}
bool _Script_Engine::SoundWave::get_bSingleLine() {
    return (*(uint8_t*)((uintptr_t)this + 0x17e + 0)) & 1 != 0;
}
void _Script_Engine::SoundWave::set_bSingleLine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17e + 0);
    *(uint8_t*)((uintptr_t)this + 0x17e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundWave::get_bIsAmbisonics() {
    return (*(uint8_t*)((uintptr_t)this + 0x17e + 0)) & 2 != 0;
}
void _Script_Engine::SoundWave::set_bIsAmbisonics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17e + 0);
    *(uint8_t*)((uintptr_t)this + 0x17e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SoundWave::get_ModulationSettings() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::SoundWave::get_FrequenciesToAnalyze() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_Engine::SoundWave::get_CookedSpectralTimeData() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_Engine::SoundWave::get_CookedEnvelopeTimeData() {
    return (void*)((uintptr_t)this + 0x1e8);
}
int32_t& _Script_Engine::SoundWave::get_InitialChunkSize() {
    return *(int32_t*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::SoundWave::get_SpokenText() {
    return (void*)((uintptr_t)this + 0x240);
}
float& _Script_Engine::SoundWave::get_SubtitlePriority() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Script_Engine::SoundWave::get_Volume() {
    return *(float*)((uintptr_t)this + 0x254);
}
int32_t& _Script_Engine::SoundWave::get_SampleRate() {
    return *(int32_t*)((uintptr_t)this + 0x260);
}
void* _Script_Engine::SoundWave::get_Subtitles() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWave::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundWave");
    return result;
}
