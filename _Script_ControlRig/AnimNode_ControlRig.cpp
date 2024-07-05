#include "..\FUObjectArray.hpp"
#include "AnimNode_ControlRig.hpp"
#include "AnimNode_ControlRigBase.hpp"
#include "ControlRig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::AnimNode_ControlRig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.AnimNode_ControlRig");
    return result;
}
void* _Script_ControlRig::AnimNode_ControlRig::get_ControlRigClass() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Script_ControlRig::AnimNode_ControlRig::set_bSetRefPoseFromSkeleton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x185 + 0);
    *(uint8_t*)((uintptr_t)this + 0x185 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_OutputMapping() {
    return (void*)((uintptr_t)this + 0x260);
}
bool _Script_ControlRig::AnimNode_ControlRig::get_bSetRefPoseFromSkeleton() {
    return (*(uint8_t*)((uintptr_t)this + 0x185 + 0)) & 2 != 0;
}
_Script_ControlRig::ControlRig*& _Script_ControlRig::AnimNode_ControlRig::get_ControlRig() {
    return *(_Script_ControlRig::ControlRig**)((uintptr_t)this + 0x178);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0x184);
}
float& _Script_ControlRig::AnimNode_ControlRig::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x180);
}
bool _Script_ControlRig::AnimNode_ControlRig::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x185 + 0)) & 1 != 0;
}
void _Script_ControlRig::AnimNode_ControlRig::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x185 + 0);
    *(uint8_t*)((uintptr_t)this + 0x185 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_ControlRig::AnimNode_ControlRig::get_InputMapping() {
    return (void*)((uintptr_t)this + 0x210);
}
int32_t& _Script_ControlRig::AnimNode_ControlRig::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x360);
}
