#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MovieSceneDeterminismSource.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneDeterminismSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneDeterminismSource");
    return result;
}
