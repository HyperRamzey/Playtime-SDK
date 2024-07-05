#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "LevelSequenceDirector.hpp"
#include "LevelSequencePlayer.hpp"
#include "..\_Script_MovieScene\MovieSceneObjectBindingID.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
void _Script_LevelSequence::LevelSequenceDirector::OnCreated() {
    return;
}
_Script_LevelSequence::LevelSequencePlayer*& _Script_LevelSequence::LevelSequenceDirector::get_Player() {
    return *(_Script_LevelSequence::LevelSequencePlayer**)((uintptr_t)this + 0x28);
}
int32_t& _Script_LevelSequence::LevelSequenceDirector::get_SubSequenceID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_LevelSequence::LevelSequenceDirector::get_MovieScenePlayerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_MovieScene::MovieSceneSequence* _Script_LevelSequence::LevelSequenceDirector::GetSequence() {
    return;
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceDirector");
    return result;
}
void* _Script_LevelSequence::LevelSequenceDirector::GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}
_Script_CoreUObject::Object* _Script_LevelSequence::LevelSequenceDirector::GetBoundObject(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}
void* _Script_LevelSequence::LevelSequenceDirector::GetBoundActors(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}
_Script_Engine::Actor* _Script_LevelSequence::LevelSequenceDirector::GetBoundActor(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}
