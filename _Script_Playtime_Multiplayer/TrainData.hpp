#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct TrainData {
    private: char pad_0[0x24]; public:
    bool get_bIsMoving();
    void set_bIsMoving(bool value);
    bool get_bIsFixed();
    void set_bIsFixed(bool value);
    bool get_bDoLoopTransition();
    void set_bDoLoopTransition(bool value);
    bool get_bFullyTransitionedToLoop();
    void set_bFullyTransitionedToLoop(bool value);
    bool get_bDoEndTransition();
    void set_bDoEndTransition(bool value);
    bool get_bEnded();
    void set_bEnded(bool value);
    float& get_LastDistance();
    int32_t& get_TrainStation();
    float& get_TrainTimelineProgress();
    int32_t& get_StartStation();
    int32_t& get_EndStation();
    float& get_TrainDistance();
    float& get_Alpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
