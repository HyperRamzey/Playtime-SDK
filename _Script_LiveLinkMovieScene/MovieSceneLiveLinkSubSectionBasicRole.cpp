#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneLiveLinkSubSection.hpp"
#include "MovieSceneLiveLinkSubSectionBasicRole.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::MovieSceneLiveLinkSubSectionBasicRole::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole");
    return result;
}
