#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot {
#pragma pack(push, 1)
struct BP_Lobby_PlayerSlot_C : public _Script_Engine::Actor {
    private: char pad_220[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetComponent*& get_W_Monster();
    _Script_UMG::WidgetComponent*& get_Widget();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_Number();
    bool get_Enabled();
    void set_Enabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateSlot();
    void OnRep_Enabled();
    bool IsMaterialReady();
    void SetReady(bool Condition);
    void GS_Escape_SetInterface();
    void UpdatePlayerAsMonster(bool Value);
    void ReceiveBeginPlay0();
    void SetInterface(int32_t Count);
    void ExecuteUbergraph_BP_Lobby_PlayerSlot(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
