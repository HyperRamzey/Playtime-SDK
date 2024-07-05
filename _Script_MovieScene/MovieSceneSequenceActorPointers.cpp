#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "MovieSceneSequenceActorPointers.hpp"
void* _Script_MovieScene::MovieSceneSequenceActorPointers::get_SequenceActorInterface() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::Actor*& _Script_MovieScene::MovieSceneSequenceActorPointers::get_SequenceActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceActorPointers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequenceActorPointers");
    return result;
}
