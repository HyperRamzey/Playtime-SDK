#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
#include "MovieSceneMotionVectorSimulationSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneMotionVectorSimulationSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem");
    return result;
}
