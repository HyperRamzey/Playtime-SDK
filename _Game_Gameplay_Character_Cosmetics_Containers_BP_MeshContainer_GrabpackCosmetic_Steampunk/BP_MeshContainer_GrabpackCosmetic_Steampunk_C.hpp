#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic\BP_MeshContainer_GrabpackCosmetic_C.hpp"
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic_Steampunk {
#pragma pack(push, 1)
struct BP_MeshContainer_GrabpackCosmetic_Steampunk_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C {
    private: char pad_2f0[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Niagara::NiagaraComponent*& get_Embers();
    _Script_Niagara::NiagaraComponent*& get_SecondSmoke();
    _Script_Niagara::NiagaraComponent*& get_MainSmoke();
    _Script_Engine::StaticMeshComponent*& get_CirclePanel();
    static _Script_CoreUObject::Class* static_class();
    void Network_Character_Tick(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MeshContainer_GrabpackCosmetic_Steampunk(int32_t EntryPoint);
}; // Size: 0x318
#pragma pack(pop)
}
