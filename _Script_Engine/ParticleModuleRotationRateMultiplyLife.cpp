#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleRotationRateBase.hpp"
#include "ParticleModuleRotationRateMultiplyLife.hpp"
void* _Script_Engine::ParticleModuleRotationRateMultiplyLife::get_LifeMultiplier() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRotationRateMultiplyLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRotationRateMultiplyLife");
    return result;
}
