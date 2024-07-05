#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTrack.hpp"
#include "TestMovieSceneEvalHookTrack.hpp"
void* _Script_MovieScene::TestMovieSceneEvalHookTrack::get_SectionArray() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneEvalHookTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneEvalHookTrack");
    return result;
}
