#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActiveCameraShakeInfo.hpp"
#include "CameraShakeBase.hpp"
_Script_Engine::CameraShakeBase*& _Script_Engine::ActiveCameraShakeInfo::get_ShakeInstance() {
    return *(_Script_Engine::CameraShakeBase**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ActiveCameraShakeInfo::get_ShakeSource() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::ActiveCameraShakeInfo::get_bIsCustomInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::ActiveCameraShakeInfo::set_bIsCustomInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ActiveCameraShakeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ActiveCameraShakeInfo");
    return result;
}
