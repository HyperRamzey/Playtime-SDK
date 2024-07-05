#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\ANetworkHand.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic {
struct BP_MeshContainer_HandCosmetic_C;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand {
struct ABP_PlayerExtendoHand_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkHand {
#pragma pack(push, 1)
struct BP_NetworkHand_C : public _Script_Playtime_Multiplayer::ANetworkHand {
    private: char pad_390[0x50]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_HandCosmetic();
    _Script_Engine::MaterialInterface*& get_RightHandMaterial();
    _Script_Engine::MaterialInterface*& get_LeftHandMaterial();
    _Game_World_Geometry_Characters_PlayerCharacter_Hands_ABP_PlayerExtendoHand::ABP_PlayerExtendoHand_C*& get_Anim_BP();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_HandCosmetic::BP_MeshContainer_HandCosmetic_C*& get_Hand_Mesh_Container();
    void* get_HandLaunched();
    void* get_HandRetracted();
    static _Script_CoreUObject::Class* static_class();
    void SetStyle();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BP_BeginTouch0(float GrabbedThickness_, float DistanceFromPalm_, _Script_Engine::AnimSequence* AnimToPlay);
    void BP_PseudoDestroy0();
    void BP_PseudoSpawn0();
    void BP_EndTouch0();
    void ExecuteUbergraph_BP_NetworkHand(int32_t EntryPoint);
    void HandRetracted__DelegateSignature();
    void HandLaunched__DelegateSignature();
}; // Size: 0x3e0
#pragma pack(pop)
}
