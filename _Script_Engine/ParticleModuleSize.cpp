#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSize.hpp"
#include "ParticleModuleSizeBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSize::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSize");
    return result;
}
void* _Script_Engine::ParticleModuleSize::get_StartSize() {
    return (void*)((uintptr_t)this + 0x30);
}
