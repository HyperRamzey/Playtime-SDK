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
struct ChildActorComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Game_Player_Huggy_HuggyVentManager {
struct HuggyVentManager_C;
}
namespace _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel {
struct BP_MP_HandPanel_C;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Huggy_BP_HuggyVent {
#pragma pack(push, 1)
struct BP_HuggyVent_C : public _Script_Engine::Actor {
    private: char pad_220[0x90]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::StaticMeshComponent*& get_Cube3();
    _Script_Engine::StaticMeshComponent*& get_Cube2();
    _Script_Engine::StaticMeshComponent*& get_Cube1();
    _Script_Engine::ChildActorComponent*& get_BP_MP_HandPanel_2();
    _Script_Engine::ChildActorComponent*& get_BP_MP_HandPanel_1();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_Locked();
    void set_Locked(bool value);
    _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C*& get_Hand_Panel_1();
    _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C*& get_Hand_Panel_2();
    _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& get_Huggy();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_Hand_Magnet();
    int32_t& get_LeftVent2();
    int32_t& get_RightVent2();
    _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C*& get_VentManager();
    int32_t& get_Index();
    static _Script_CoreUObject::Class* static_class();
    void GetRightVent(_Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C*& RightVent);
    void GetLeftVent(_Game_Player_Huggy_BP_HuggyVent::BP_HuggyVent_C*& LeftVent);
    void Is_In_Range_(_Script_Engine::Actor* Actor, bool& InRange);
    void LockVent();
    void ReceiveBeginPlay0();
    void EnterVent();
    void MoveToVent();
    void ExitVent();
    void Alert(void* AttachmentStateChange);
    void ExecuteUbergraph_BP_HuggyVent(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
