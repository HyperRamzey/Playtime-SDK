#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneBlenderSystem.hpp"
#include "MovieScenePiecewiseBoolBlenderSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePiecewiseBoolBlenderSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem");
    return result;
}
