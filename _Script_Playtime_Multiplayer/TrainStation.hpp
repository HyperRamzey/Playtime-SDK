#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct TrainStation : public _Script_Engine::Actor {
    private: char pad_220[0x50]; public:
    _Script_Engine::SceneComponent*& get_Root();
    _Script_Engine::SceneComponent*& get_DebugTrain();
    _Script_Engine::SplineComponent*& get_TrackSpline();
    float& get_Length();
    void* get_DisplayCarts();
    void* get_DebugTrainAssemblyData();
    void* get_DebugTrainSettings();
    static _Script_CoreUObject::Class* static_class();
    void PseudoConstruct();
    float GetStopDistance();
    int32_t GetFullCartCount();
}; // Size: 0x270
#pragma pack(pop)
}
