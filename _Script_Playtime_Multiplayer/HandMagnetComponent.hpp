#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
#include "HandTimer.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HandMagnetComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x60]; public:
    bool get_bAutoDetach();
    void set_bAutoDetach(bool value);
    float& get_AutoDetachDelay();
    int32_t& get_MaxAttachedHands();
    void* get_GrabpackInterfaceTags();
    void* get_GrabpackImplementors();
    void* get_OnAttachmentStateChange();
    void* get_AttachedHands();
    _Script_Engine::SkeletalMeshComponent*& get_SK_GhostHand();
    _Script_Engine::AnimSequence*& get_HandAnimation();
    static _Script_CoreUObject::Class* static_class();
    void TimerRemoveHand(_Script_Playtime_Multiplayer::HandTimer HandTimer);
    void RemoveHand(_Script_Playtime_Multiplayer::HandTimer HandTimer);
    void PseudoConstruct(void* In_GrabpackInterfaceImplementers);
    bool IsBeingPulled();
    void HasAnyAttachedHands(bool& Valid);
    void GetFirstAttachedPlayer(_Script_Engine::Actor*& Player, bool& Valid);
    void DetachAllHands();
}; // Size: 0x260
#pragma pack(pop)
}
