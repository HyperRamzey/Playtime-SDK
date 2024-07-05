#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneTakeTrack.hpp"
void* _Script_TakeMovieScene::MovieSceneTakeTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_TakeMovieScene::MovieSceneTakeTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TakeMovieScene.MovieSceneTakeTrack");
    return result;
}
