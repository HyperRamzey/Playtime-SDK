#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_BP_WireBoard {
#pragma pack(push, 1)
struct BP_WireBoard_C : public _Script_Engine::Actor {
    private: char pad_220[0x70]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Cube1();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::BoxComponent*& get_Zone();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_WireCount();
    float& get_Spacing();
    void* get_Wires();
    bool get_Solved_();
    void set_Solved_(bool value);
    void* get_OnSolved();
    void* get_WireColor();
    static _Script_CoreUObject::Class* static_class();
    void RandomizeEndPoints();
    void CheckWireConnections(bool& Solved_);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void OnConnected();
    void Disconnect();
    void ExecuteUbergraph_BP_WireBoard(int32_t EntryPoint);
    void OnSolved__DelegateSignature();
}; // Size: 0x290
#pragma pack(pop)
}
