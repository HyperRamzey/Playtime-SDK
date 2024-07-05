#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntitySystem.hpp"
#include "MovieSceneEvaluationHookSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationHookSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneEvaluationHookSystem");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationHookSystem::get_PendingEventsByRootInstance() {
    return (void*)((uintptr_t)this + 0x40);
}
