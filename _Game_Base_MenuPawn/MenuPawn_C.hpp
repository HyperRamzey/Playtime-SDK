#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Pawn.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_MenuPawn {
#pragma pack(push, 1)
struct MenuPawn_C : public _Script_Engine::Pawn {
    private: char pad_280[0x10]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_MenuPawn(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
