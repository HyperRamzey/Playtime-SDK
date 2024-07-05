#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneCompiledSequenceFlagStruct.hpp"
void _Script_MovieScene::MovieSceneCompiledSequenceFlagStruct::set_bParentSequenceRequiresUpperFence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieScene::MovieSceneCompiledSequenceFlagStruct::get_bParentSequenceRequiresLowerFence() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneCompiledSequenceFlagStruct::set_bParentSequenceRequiresLowerFence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneCompiledSequenceFlagStruct::get_bParentSequenceRequiresUpperFence() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneCompiledSequenceFlagStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneCompiledSequenceFlagStruct");
    return result;
}
