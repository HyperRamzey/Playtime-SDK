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
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_MenuTheater_BP_TheaterTape {
#pragma pack(push, 1)
struct BP_TheaterTape_C : public _Script_Engine::Actor {
    private: char pad_220[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_VHS_Index();
    bool get_Selected();
    void set_Selected(bool value);
    static _Script_CoreUObject::Class* static_class();
    void RetrieveTapeInfo();
    void SetSelected(bool Condition);
    void ReceiveActorBeginCursorOver0();
    void ReceiveActorEndCursorOver0();
    void LoadDefault();
    void ExecuteUbergraph_BP_TheaterTape(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}
