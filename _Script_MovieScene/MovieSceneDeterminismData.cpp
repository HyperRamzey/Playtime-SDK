#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneDeterminismData.hpp"
void* _Script_MovieScene::MovieSceneDeterminismData::get_Fences() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_MovieScene::MovieSceneDeterminismData::get_bParentSequenceRequiresUpperFence() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
bool _Script_MovieScene::MovieSceneDeterminismData::get_bParentSequenceRequiresLowerFence() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneDeterminismData::set_bParentSequenceRequiresUpperFence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneDeterminismData::set_bParentSequenceRequiresLowerFence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneDeterminismData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneDeterminismData");
    return result;
}
