#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Huggy_HuggyVentManager {
#pragma pack(push, 1)
struct HuggyVentManager_C : public _Script_Engine::Actor {
    private: char pad_220[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Vents();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_HuggyVentManager(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}
