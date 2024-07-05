#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct DualSplineFollower : public _Script_Engine::Actor {
    private: char pad_220[0x48]; public:
    void* get_FinishedMoving();
    _Script_Engine::SplineComponent*& get_FirstSpline();
    _Script_Engine::SplineComponent*& get_SecondSpline();
    _Script_Engine::SceneComponent*& get_RootScene();
    float& get_Progress();
    bool get_bIsReversed();
    void set_bIsReversed(bool value);
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_CharacterToPull();
    float& get_Speed();
    float& get_CrossoverThreshold();
    bool get_bHasPseudoSpawned();
    void set_bHasPseudoSpawned(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetTimeToTake(float TimeToTake);
    void ReverseDirection();
    void Multicast_PseudoSpawn(_Script_Engine::SplineComponent* SplineToBaseFirstSplineOn, _Script_Engine::SplineComponent* In_SecondSpline, _Script_CoreUObject::Vector CharacterLocation);
    void GetCharacterToPull(_Script_Playtime_Multiplayer::ANetworkCharacter*& Character);
    void Authority_PseudoSpawn(float TimeToTake, _Script_Engine::SplineComponent* SplineToBaseFirstSplineOn, _Script_Engine::SplineComponent* In_SecondSpline);
}; // Size: 0x268
#pragma pack(pop)
}
