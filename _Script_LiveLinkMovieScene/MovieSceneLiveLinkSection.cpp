#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneLiveLinkSection.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_SubjectPreset() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_ChannelMask() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_SubSections() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_TemplateToPush() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_PropertyFloatChannels() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_CurveNames() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::get_RefSkeleton() {
    return (void*)((uintptr_t)this + 0x1e8);
}
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection");
    return result;
}
