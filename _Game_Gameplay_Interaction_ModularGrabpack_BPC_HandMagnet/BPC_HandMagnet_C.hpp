#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\HandMagnetComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
#pragma pack(push, 1)
struct BPC_HandMagnet_C : public _Script_Playtime_Multiplayer::HandMagnetComponent {
    private: char pad_260[0x10]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void GetFirstAttachedCharacter(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Character);
    void OnHandStartPull(_Script_CoreUObject::Object* Caller);
    void OnHandDetach(_Script_CoreUObject::Object* Caller);
    void OnHandAttach(_Script_CoreUObject::Object* Caller);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPC_HandMagnet(int32_t EntryPoint);
}; // Size: 0x270
#pragma pack(pop)
}
