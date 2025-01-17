#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CameraShakeBase.hpp"
#include "CameraShakePattern.hpp"
#include "PlayerCameraManager.hpp"
_Script_Engine::CameraShakePattern* _Script_Engine::CameraShakeBase::GetRootShakePattern() {
    return;
}
bool _Script_Engine::CameraShakeBase::get_bSingleInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::CameraShakeBase::set_bSingleInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::CameraShakeBase::get_ShakeScale() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::CameraShakeBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraShakeBase");
    return result;
}
_Script_Engine::CameraShakePattern*& _Script_Engine::CameraShakeBase::get_RootShakePattern() {
    return *(_Script_Engine::CameraShakePattern**)((uintptr_t)this + 0x30);
}
_Script_Engine::PlayerCameraManager*& _Script_Engine::CameraShakeBase::get_CameraManager() {
    return *(_Script_Engine::PlayerCameraManager**)((uintptr_t)this + 0x38);
}
void _Script_Engine::CameraShakeBase::SetRootShakePattern(_Script_Engine::CameraShakePattern* InPattern) {
    return;
}
