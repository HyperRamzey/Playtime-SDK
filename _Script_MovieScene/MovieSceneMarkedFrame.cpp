#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneMarkedFrame.hpp"
void* _Script_MovieScene::MovieSceneMarkedFrame::get_FrameNumber() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneMarkedFrame::get_Label() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_MovieScene::MovieSceneMarkedFrame::get_bIsDeterminismFence() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneMarkedFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneMarkedFrame");
    return result;
}
void _Script_MovieScene::MovieSceneMarkedFrame::set_bIsDeterminismFence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
