#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePropertySystem.hpp"
#include "MovieSceneVectorPropertySystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVectorPropertySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneVectorPropertySystem");
    return result;
}
