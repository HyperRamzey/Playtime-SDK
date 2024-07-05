#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NinjaCharacter\NinjaCharacter.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Playtime_Multiplayer {
struct CustomPlayerController;
}
namespace _Script_Playtime_Multiplayer {
struct MommyCameraPawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CustomNinjaCharacter : public _Script_NinjaCharacter::NinjaCharacter {
    private: char pad_520[0x30]; public:
    bool get_bTouchingWall();
    void set_bTouchingWall(bool value);
    _Script_Engine::CameraComponent*& get_CameraComp();
    _Script_Playtime_Multiplayer::CustomPlayerController*& get_CPC();
    _Script_Playtime_Multiplayer::MommyCameraPawn*& get_MommyCamera();
    void* get_MommyCameraPawnClass();
    bool get_bUseActorRotation();
    void set_bUseActorRotation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SpawnMommyCamera();
    void OnTouchingWallChanged();
    void OnRep_TouchingWall();
    void MoveRight(float Val);
    void MoveForward(float Val);
}; // Size: 0x550
#pragma pack(pop)
}
