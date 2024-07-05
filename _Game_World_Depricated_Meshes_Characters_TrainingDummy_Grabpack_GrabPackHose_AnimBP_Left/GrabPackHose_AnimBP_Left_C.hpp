#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP\GrabPackHose_AnimBP_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP_Left {
#pragma pack(push, 1)
struct GrabPackHose_AnimBP_Left_C : public _Game_World_Depricated_Meshes_Characters_TrainingDummy_Grabpack_GrabPackHose_AnimBP::GrabPackHose_AnimBP_C {
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_GrabPackHose_AnimBP_Left(int32_t EntryPoint);
}; // Size: 0x550
#pragma pack(pop)
}
