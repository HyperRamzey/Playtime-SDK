#include "..\FUObjectArray.hpp"
#include "ChaosClothSharedSimConfig.hpp"
#include "..\_Script_ClothingSystemRuntimeCommon\ClothSharedConfigCommon.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ChaosCloth::ChaosClothSharedSimConfig::get_bUseXPBDConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
int32_t& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_IterationCount() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothSharedSimConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosCloth.ChaosClothSharedSimConfig");
    return result;
}
int32_t& _Script_ChaosCloth::ChaosClothSharedSimConfig::get_SubdivisionCount() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
bool _Script_ChaosCloth::ChaosClothSharedSimConfig::get_bUseLocalSpaceSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_ChaosCloth::ChaosClothSharedSimConfig::set_bUseLocalSpaceSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ChaosCloth::ChaosClothSharedSimConfig::set_bUseXPBDConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
