#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraShakeUpdateParams.hpp"
_Script_CoreUObject::Class* _Script_Engine::CameraShakeUpdateParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraShakeUpdateParams");
    return result;
}
void* _Script_Engine::CameraShakeUpdateParams::get_POV() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::CameraShakeUpdateParams::get_DeltaTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::CameraShakeUpdateParams::get_ShakeScale() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::CameraShakeUpdateParams::get_DynamicScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::CameraShakeUpdateParams::get_BlendingWeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
