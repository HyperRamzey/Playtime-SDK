#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\TrainStation.hpp"
namespace _Script_Engine {
struct InstancedStaticMeshComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_BP_TrainStation {
#pragma pack(push, 1)
struct BP_TrainStation_C : public _Script_Playtime_Multiplayer::TrainStation {
    private: char pad_270[0x40]; public:
    _Script_Engine::InstancedStaticMeshComponent*& get_InstancedStaticMesh1();
    _Script_Engine::InstancedStaticMeshComponent*& get_InstancedStaticMesh();
    _Script_Engine::SceneComponent*& get_Tunnel_Back();
    _Script_Engine::SceneComponent*& get_Tunnel_Front();
    _Script_Engine::TextRenderComponent*& get_TextRender3();
    _Script_Engine::TextRenderComponent*& get_TextRender2();
    _Script_Engine::TextRenderComponent*& get_TextRender1();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x2b0
#pragma pack(pop)
}
