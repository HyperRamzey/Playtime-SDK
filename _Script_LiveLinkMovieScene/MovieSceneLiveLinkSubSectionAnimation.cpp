#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneLiveLinkSubSection.hpp"
#include "MovieSceneLiveLinkSubSectionAnimation.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSubSectionAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation");
    return result;
}
