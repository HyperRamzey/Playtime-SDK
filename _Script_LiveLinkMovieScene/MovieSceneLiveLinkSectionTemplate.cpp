#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneLiveLinkSectionTemplate.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate");
    return result;
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSectionTemplate::get_SubjectPreset() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSectionTemplate::get_ChannelMask() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSectionTemplate::get_SubSectionsData() {
    return (void*)((uintptr_t)this + 0x80);
}
