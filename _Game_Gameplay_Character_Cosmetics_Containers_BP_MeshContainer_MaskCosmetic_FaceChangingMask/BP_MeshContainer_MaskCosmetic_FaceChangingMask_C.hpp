#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MaskCosmetic\BP_MeshContainer_MaskCosmetic_C.hpp"
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MaskCosmetic_FaceChangingMask {
#pragma pack(push, 1)
struct BP_MeshContainer_MaskCosmetic_FaceChangingMask_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_MaskCosmetic::BP_MeshContainer_MaskCosmetic_C {
    private: char pad_298[0x18]; public:
    void* get_UberGraphFrame();
    int32_t& get_Face();
    _Script_Engine::MaterialInstanceDynamic*& get_Face_Material();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Network_Character_Tick(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character);
    void ExecuteUbergraph_BP_MeshContainer_MaskCosmetic_FaceChangingMask(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
