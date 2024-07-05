#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement {
struct BPC_NavElement_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor {
#pragma pack(push, 1)
struct BP_NavBaseActor_C : public _Script_Engine::Actor {
    private: char pad_220[0x20]; public:
    void* get_UberGraphFrame();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C*& get_BPC_NavElement();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_SabotageDuration();
    static _Script_CoreUObject::Class* static_class();
    void Sabotage();
    void DoSabotage();
    void ExecuteUbergraph_BP_NavBaseActor(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}
