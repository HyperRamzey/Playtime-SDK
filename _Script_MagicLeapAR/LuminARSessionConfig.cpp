#include "..\FUObjectArray.hpp"
#include "..\_Script_AugmentedReality\ARSessionConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LuminARSessionConfig.hpp"
bool _Script_MagicLeapAR::LuminARSessionConfig::get_bDiscardZeroExtentPlanes() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
void* _Script_MagicLeapAR::LuminARSessionConfig::get_PlanesQuery() {
    return (void*)((uintptr_t)this + 0x110);
}
int32_t& _Script_MagicLeapAR::LuminARSessionConfig::get_MaxPlaneQueryResults() {
    return *(int32_t*)((uintptr_t)this + 0x170);
}
void* _Script_MagicLeapAR::LuminARSessionConfig::get_PlaneQueryFlags() {
    return (void*)((uintptr_t)this + 0x188);
}
int32_t& _Script_MagicLeapAR::LuminARSessionConfig::get_MinPlaneArea() {
    return *(int32_t*)((uintptr_t)this + 0x174);
}
bool _Script_MagicLeapAR::LuminARSessionConfig::get_bArbitraryOrientationPlaneDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
void* _Script_MagicLeapAR::LuminARSessionConfig::get_PlaneSearchExtents() {
    return (void*)((uintptr_t)this + 0x17c);
}
void _Script_MagicLeapAR::LuminARSessionConfig::set_bArbitraryOrientationPlaneDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MagicLeapAR::LuminARSessionConfig::set_bDiscardZeroExtentPlanes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapAR::LuminARSessionConfig::get_bDefaultUseUnreliablePose() {
    return (*(uint8_t*)((uintptr_t)this + 0x199 + 0)) & 1 != 0;
}
void _Script_MagicLeapAR::LuminARSessionConfig::set_bDefaultUseUnreliablePose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x199 + 0);
    *(uint8_t*)((uintptr_t)this + 0x199 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminARSessionConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminARSessionConfig");
    return result;
}
