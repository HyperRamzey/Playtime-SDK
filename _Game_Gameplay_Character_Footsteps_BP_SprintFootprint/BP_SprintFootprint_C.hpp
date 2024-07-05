#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Character_Footsteps_BP_SprintFootprint {
#pragma pack(push, 1)
struct BP_SprintFootprint_C : public _Script_Engine::Actor {
    private: char pad_220[0x40]; public:
    void* get_UberGraphFrame();
    _Script_Engine::DecalComponent*& get_Decal();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Fader_Track_853569C14BFD131DC13895BD21911E04();
    void* get_Fader__Direction_853569C14BFD131DC13895BD21911E04();
    _Script_Engine::TimelineComponent*& get_Fader();
    _Script_Engine::MaterialInstanceDynamic*& get_Material();
    void* get_Color();
    static _Script_CoreUObject::Class* static_class();
    void SetMaterial();
    void Fader__FinishedFunc();
    void Fader__UpdateFunc();
    void FadePrint();
    void ReceiveBeginPlay0();
    void QuickFadePrint();
    void ExecuteUbergraph_BP_SprintFootprint(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
