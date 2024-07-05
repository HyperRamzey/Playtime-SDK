#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneLiveLinkSubSection.hpp"
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSubSection::get_SubSectionData() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSubSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection");
    return result;
}
void* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSubSection::get_SubjectRole() {
    return (void*)((uintptr_t)this + 0x38);
}
