#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RadialBoxSettings.hpp"
float& _Script_UMG::RadialBoxSettings::get_StartingAngle() {
    return *(float*)((uintptr_t)this + 0x0);
}
bool _Script_UMG::RadialBoxSettings::get_bDistributeItemsEvenly() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_UMG::RadialBoxSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.RadialBoxSettings");
    return result;
}
void _Script_UMG::RadialBoxSettings::set_bDistributeItemsEvenly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::RadialBoxSettings::get_AngleBetweenItems() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_UMG::RadialBoxSettings::get_SectorCentralAngle() {
    return *(float*)((uintptr_t)this + 0xc);
}
