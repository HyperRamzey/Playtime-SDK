#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneIntegerSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneIntegerSection::get_IntegerCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneIntegerSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneIntegerSection");
    return result;
}