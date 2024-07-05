#include "..\FUObjectArray.hpp"
#include "MovieSceneControlRigInstanceData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSequenceInstanceData.hpp"
void* _Script_ControlRig::MovieSceneControlRigInstanceData::get_Weight() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_ControlRig::MovieSceneControlRigInstanceData::get_bAdditive() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_ControlRig::MovieSceneControlRigInstanceData::set_bAdditive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::MovieSceneControlRigInstanceData::get_bApplyBoneFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_ControlRig::MovieSceneControlRigInstanceData::set_bApplyBoneFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::MovieSceneControlRigInstanceData::get_BoneFilter() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::MovieSceneControlRigInstanceData::get_Operand() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ControlRig::MovieSceneControlRigInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MovieSceneControlRigInstanceData");
    return result;
}
