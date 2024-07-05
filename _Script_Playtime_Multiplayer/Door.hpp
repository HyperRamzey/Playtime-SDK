#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Door : public _Script_Engine::Actor {
    private: char pad_220[0x60]; public:
    bool get_bIsClosedByDefault();
    void set_bIsClosedByDefault(bool value);
    float& get_NetOpenness();
    float& get_ClosingDuration();
    float& get_OpeningDuration();
    void* get_DoorState();
    bool get_bDisabledByNoEscape();
    void set_bDisabledByNoEscape(bool value);
    _Script_Engine::CurveFloat*& get_OpenCurve();
    _Script_Engine::CurveFloat*& get_CloseCurve();
    void* get_HandMagnetComponents();
    bool get_bShutByLockdown();
    void set_bShutByLockdown(bool value);
    void* get_LockdownTimer();
    static _Script_CoreUObject::Class* static_class();
    void SabotageLockdown(float Duration);
    void RegisterHandMagnets(void* In_HandMagnets);
    bool OpenDoor();
    void OnRep_ShutByLockdown();
    void OnRep_DoorState(void* PreviousState);
    void OnRep_DisabledByNoEscape();
    bool IsShutByLockdown();
    bool IsDisabledByNoEscape();
    float GetCurvedOpenness();
    void ForceOpenDoor();
    void ForceCloseDoor();
    void EndLockdownSabotage();
    bool CloseDoor();
    void BP_ShowOpenness(float CurvedOpenness);
    void BP_OnRep_ShutByLockdown();
    void BP_OnRep_DoorState(void* PreviousState);
    void BP_OnRep_DisabledByNoEscape();
    void BP_OnOpened();
    void BP_OnClosed();
    void Authority_EndSabotage();
}; // Size: 0x280
#pragma pack(pop)
}
