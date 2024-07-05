#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneHookSection.hpp"
#include "TestMovieSceneEvalHookSection.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneEvalHookSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneEvalHookSection");
    return result;
}
