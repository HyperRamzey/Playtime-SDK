#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameStateBase.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_GS_MenuState {
#pragma pack(push, 1)
struct GS_MenuState_C : public _Script_Engine::GameStateBase {
    private: char pad_270[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_XP();
    void* get_ToyBoxResponse();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GS_MenuState(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
