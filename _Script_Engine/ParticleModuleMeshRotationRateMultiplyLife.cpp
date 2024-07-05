#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleMeshRotationRateMultiplyLife.hpp"
#include "ParticleModuleRotationRateBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleMeshRotationRateMultiplyLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleMeshRotationRateMultiplyLife");
    return result;
}
void* _Script_Engine::ParticleModuleMeshRotationRateMultiplyLife::get_LifeMultiplier() {
    return (void*)((uintptr_t)this + 0x30);
}
