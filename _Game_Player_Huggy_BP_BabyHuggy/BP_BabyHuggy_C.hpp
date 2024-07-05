#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_Engine\DefaultPawn.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct RotatingMovementComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct InterpToMovementComponent;
}
namespace _Script_AIModule {
struct AIPerceptionComponent;
}
namespace _Game_Player_Huggy_BP_BabyHuggy {
#pragma pack(push, 1)
struct BP_BabyHuggy_C : public _Script_Engine::DefaultPawn {
    private: char pad_2a8[0x60]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_HuggyMeshCosmetic();
    _Script_Engine::SkeletalMeshComponent*& get_HuggyMesh();
    _Script_Engine::RotatingMovementComponent*& get_RotatingMovement();
    _Script_Engine::CapsuleComponent*& get_Capsule();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::InterpToMovementComponent*& get_InterpToMovement();
    _Script_AIModule::AIPerceptionComponent*& get_AIPerception();
    bool get_HasSeenPlayer();
    void set_HasSeenPlayer(bool value);
    float& get_CapsuleHalfHeight();
    float& get_CapsuleRadius();
    void* get_Target_Position();
    _Script_Engine::Actor*& get_Actor();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnNotifyEnd_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName);
    void OnNotifyBegin_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName);
    void OnInterrupted_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName);
    void OnBlendOut_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName);
    void OnCompleted_A156AB274D7731BD2EED2181AFB9A6C4(void* NotifyName);
    void BabyHuggyScream();
    void ReceiveBeginPlay();
    void RotateBaby();
    void BndEvt__BP_BabyHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_BabyHuggy(int32_t EntryPoint);
}; // Size: 0x308
#pragma pack(pop)
}
