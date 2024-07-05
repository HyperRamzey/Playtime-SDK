#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_MovieScene\MovieSceneObjectBindingID.hpp"
namespace _Script_LevelSequence {
struct LevelSequencePlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceDirector : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    _Script_LevelSequence::LevelSequencePlayer*& get_Player();
    int32_t& get_SubSequenceID();
    int32_t& get_MovieScenePlayerIndex();
    static _Script_CoreUObject::Class* static_class();
    void OnCreated();
    _Script_MovieScene::MovieSceneSequence* GetSequence();
    void* GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
    _Script_CoreUObject::Object* GetBoundObject(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
    void* GetBoundActors(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
    _Script_Engine::Actor* GetBoundActor(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
}; // Size: 0x38
#pragma pack(pop)
}
