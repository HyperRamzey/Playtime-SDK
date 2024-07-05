#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Player_TrainingDummy_Menu_BP_HandPackage {
struct BP_HandPackage_C;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand {
struct BP_NetExtendoHand_C;
}
namespace _Game_Player_TrainingDummy_Menu_BP_PlayerPreview {
#pragma pack(push, 1)
struct BP_PlayerPreview_C : public _Script_Engine::Character {
    private: char pad_4c0[0xb0]; public:
    _Script_Engine::SceneComponent*& get_Hose_Beg_R();
    _Script_Engine::SceneComponent*& get_Hose_End_R();
    _Script_Engine::SceneComponent*& get_Hose_End_L();
    _Script_Engine::SkeletalMeshComponent*& get_GrabpackPhysPack();
    _Script_Engine::SkeletalMeshComponent*& get_Hose_R();
    _Script_Engine::SkeletalMeshComponent*& get_Hose_L();
    _Script_Engine::SkeletalMeshComponent*& get_GrabPackGuns();
    _Script_Engine::SkeletalMeshComponent*& get_Sticker();
    _Script_Engine::SkeletalMeshComponent*& get_Shirt();
    _Script_Engine::SkeletalMeshComponent*& get_Hat();
    _Script_Engine::SkeletalMeshComponent*& get_GrabPack_HandL();
    _Script_Engine::SkeletalMeshComponent*& get_GrabPack_HandR();
    _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C*& get_RightHandPackage();
    _Game_Player_TrainingDummy_Menu_BP_HandPackage::BP_HandPackage_C*& get_LeftHandPackage();
    _Script_Engine::StaticMeshComponent*& get_GrabPack_GunR();
    _Script_Engine::StaticMeshComponent*& get_GrabPack_GunL();
    float& get_LookPitch();
    void* get_Cosmetics();
    void* get_AppliedCosmetics();
    bool get_ShouldInitLoadCosmetics();
    void set_ShouldInitLoadCosmetics(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ResetGrabPack();
    void ClearCosmetics();
    void LoadCosmetics();
    void SaveCosmeticData();
    _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand::BP_NetExtendoHand_C* GetHandReference(bool LeftHand);
    void SpawnExtendoHand(_Script_CoreUObject::Transform SpawnTransform, _Script_CoreUObject::Vector RoughEnd_Location, _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C* Player, bool LeftHand);
    void Rotate_Gun_to_Hand(_Script_Engine::SceneComponent* Gun, _Script_CoreUObject::Rotator NewRotation, bool Reset);
}; // Size: 0x570
#pragma pack(pop)
}
