#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSequenceData.hpp"
void* _Script_MovieScene::MovieSceneSubSequenceData::get_DeterministicSequenceID() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_OuterToInnerTransform() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_Sequence() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_RootToSequenceTransform() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_TickResolution() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_ParentEndFrameOffset() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_ParentPlayRange() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_ParentStartFrameOffset() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_ParentFirstLoopStartFrameOffset() {
    return (void*)((uintptr_t)this + 0x7c);
}
bool _Script_MovieScene::MovieSceneSubSequenceData::get_bCanLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSubSequenceData::set_bCanLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PlayRange() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_FullPlayRange() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_UnwarpedPlayRange() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PreRollRange() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PostRollRange() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_HierarchicalBias() {
    return (void*)((uintptr_t)this + 0xd4);
}
bool _Script_MovieScene::MovieSceneSubSequenceData::get_bHasHierarchicalEasing() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSubSequenceData::set_bHasHierarchicalEasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_InstanceData() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_SubSectionSignature() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSequenceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSubSequenceData");
    return result;
}
