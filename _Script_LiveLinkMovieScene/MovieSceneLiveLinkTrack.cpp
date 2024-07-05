#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneLiveLinkTrack.hpp"
#include "..\_Script_MovieSceneTracks\MovieScenePropertyTrack.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::MovieSceneLiveLinkTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack");
    return result;
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkTrack::get_TrackRole() {
    return (void*)((uintptr_t)this + 0xc8);
}
