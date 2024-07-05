#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand {
struct BP_NetExtendoHand_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_Menu_BP_PlayerPreview {
struct BP_PlayerPreview_C;
}
namespace _Game_Player_TrainingDummy_Menu_BP_HandPackage {
#pragma pack(push, 1)
struct BP_HandPackage_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C*& get_HandReference();
    static _Script_CoreUObject::Class* static_class();
    void NetToggleRetraction(bool Condition);
    void MultiToggleRetraction(bool Condition);
    void NetUnattachAndRetractHand();
    void MultiUnattachAndRetractHand();
    void PackageUnattachAndRetractHand();
    void PackageToggleRetraction(bool Condition);
    void ExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand);
    void TryExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand);
    void MultiExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand);
    void NetExtendHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand);
    void ExecuteUbergraph_BP_HandPackage(int32_t EntryPoint);
}; // Size: 0xc0
#pragma pack(pop)
}
