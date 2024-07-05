#include "..\FUObjectArray.hpp"
#include "..\_Script_AugmentedReality\ARCandidateImage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LuminARCandidateImage.hpp"
bool _Script_MagicLeapAR::LuminARCandidateImage::get_bUseUnreliablePose() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_MagicLeapAR::LuminARCandidateImage::set_bUseUnreliablePose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapAR::LuminARCandidateImage::get_bImageIsStationary() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_MagicLeapAR::LuminARCandidateImage::set_bImageIsStationary(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapAR::LuminARCandidateImage::GetUseUnreliablePose() {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminARCandidateImage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminARCandidateImage");
    return result;
}
void* _Script_MagicLeapAR::LuminARCandidateImage::get_AxisOrientation() {
    return (void*)((uintptr_t)this + 0x5a);
}
bool _Script_MagicLeapAR::LuminARCandidateImage::GetImageIsStationary() {
    return;
}
void* _Script_MagicLeapAR::LuminARCandidateImage::GetAxisOrientation() {
    return;
}
