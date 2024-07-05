#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraShakeScrubParams.hpp"
_Script_CoreUObject::Class* _Script_Engine::CameraShakeScrubParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraShakeScrubParams");
    return result;
}
float& _Script_Engine::CameraShakeScrubParams::get_DynamicScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::CameraShakeScrubParams::get_AbsoluteTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::CameraShakeScrubParams::get_ShakeScale() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::CameraShakeScrubParams::get_POV() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::CameraShakeScrubParams::get_BlendingWeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
