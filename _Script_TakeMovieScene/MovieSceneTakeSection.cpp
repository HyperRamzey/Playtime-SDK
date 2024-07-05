#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneTakeSection.hpp"
void* _Script_TakeMovieScene::MovieSceneTakeSection::get_HoursCurve() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_TakeMovieScene::MovieSceneTakeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TakeMovieScene.MovieSceneTakeSection");
    return result;
}
void* _Script_TakeMovieScene::MovieSceneTakeSection::get_MinutesCurve() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_TakeMovieScene::MovieSceneTakeSection::get_Slate() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_TakeMovieScene::MovieSceneTakeSection::get_FramesCurve() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_TakeMovieScene::MovieSceneTakeSection::get_SecondsCurve() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_TakeMovieScene::MovieSceneTakeSection::get_SubFramesCurve() {
    return (void*)((uintptr_t)this + 0x328);
}
