#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Player_Boxy_BP_NetworkBoxy {
struct BP_NetworkBoxy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy {
struct BP_NetworkMommy_C;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Game_Player_Huggy_BP_MonsterShrinker {
#pragma pack(push, 1)
struct BP_MonsterShrinker_C : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Height();
    float& get_New_Walk_Speed();
    bool get_MonsterIgnore();
    void set_MonsterIgnore(bool value);
    static _Script_CoreUObject::Class* static_class();
    void BoxyExitCrouch(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* BoxyRef);
    void BoxyEnterCrouch(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C* BoxyRef);
    void MommyExitCrouch(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* MommyRef);
    void MommyEnterCrouch(_Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C* MommyRef);
    void HuggyExitCrouch(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* HuggyRef);
    void HuggyEnterCrouch(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C* HuggyRef);
    void ReceiveActorEndOverlap0(_Script_Engine::Actor* OtherActor);
    void ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BP_MonsterShrinker(int32_t EntryPoint);
}; // Size: 0x248
#pragma pack(pop)
}
