#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleReplayTrackKey.hpp"
int32_t& _Script_Engine::ParticleReplayTrackKey::get_ClipIDNumber() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::ParticleReplayTrackKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ParticleReplayTrackKey::get_Duration() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleReplayTrackKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleReplayTrackKey");
    return result;
}
