#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneMatineeCameraShakeEvaluator.hpp"
#include "..\_Script_MovieSceneTracks\MovieSceneCameraShakeEvaluator.hpp"
_Script_CoreUObject::Class* _Script_GameplayCameras::MovieSceneMatineeCameraShakeEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.MovieSceneMatineeCameraShakeEvaluator");
    return result;
}
