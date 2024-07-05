#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Geometry_Characters_Train_BP_PassengerCarSetdress {
#pragma pack(push, 1)
struct BP_PassengerCarSetdress_C : public _Script_Engine::Actor {
    private: char pad_220[0x140]; public:
    _Script_Engine::StaticMeshComponent*& get_SM_Wall_100x500_Basic_1();
    _Script_Engine::StaticMeshComponent*& get_SM_Wall_100x500_Basic_2();
    _Script_Engine::DecalComponent*& get_Decal5();
    _Script_Engine::DecalComponent*& get_Decal4();
    _Script_Engine::DecalComponent*& get_Decal3();
    _Script_Engine::DecalComponent*& get_Decal2();
    _Script_Engine::DecalComponent*& get_Decal1();
    _Script_Engine::DecalComponent*& get_Decal();
    _Script_Engine::StaticMeshComponent*& get_SM_Light_F();
    _Script_Engine::StaticMeshComponent*& get_SM_Light_F1();
    _Script_Engine::PointLightComponent*& get_PointLight4();
    _Script_Engine::PointLightComponent*& get_PointLight3();
    _Script_Engine::StaticMeshComponent*& get_SM_Rackshield_04();
    _Script_Engine::StaticMeshComponent*& get_SM_Rackshield_03();
    _Script_Engine::StaticMeshComponent*& get_SM_CartonDrawer_010();
    _Script_Engine::StaticMeshComponent*& get_SM_CartonDrawer_09();
    _Script_Engine::StaticMeshComponent*& get_SM_CartonDrawer_08();
    _Script_Engine::StaticMeshComponent*& get_SM_Star_Big_Prop();
    _Script_Engine::StaticMeshComponent*& get_SM_FirstAidKit_Flashlight2();
    _Script_Engine::StaticMeshComponent*& get_SM_CardBoxA_02();
    _Script_Engine::StaticMeshComponent*& get_SM_FirstAidKit_Flashlight1();
    _Script_Engine::StaticMeshComponent*& get_SM_FirstAidKit_Flashlight();
    _Script_Engine::StaticMeshComponent*& get_SM_PosterFrame_A();
    _Script_Engine::StaticMeshComponent*& get_SM_EmergencyBoardFull_01();
    _Script_Engine::StaticMeshComponent*& get_SM_ElectricBox();
    _Script_Engine::StaticMeshComponent*& get_SM_SignA_03();
    _Script_Engine::StaticMeshComponent*& get_SM_WallSwitch_03();
    _Script_Engine::StaticMeshComponent*& get_SM_WallSwitch_02();
    _Script_Engine::StaticMeshComponent*& get_SM_PosterFrame();
    _Script_Engine::StaticMeshComponent*& get_SM_Huggystuffed_Prop();
    _Script_Engine::StaticMeshComponent*& get_SM_ClothA_01();
    _Script_Engine::StaticMeshComponent*& get_SM_AchievementRoom_CupV2_3();
    _Script_Engine::StaticMeshComponent*& get_SM_AchievementRoom_CupV1_1();
    _Script_Engine::StaticMeshComponent*& get_SM_Star_Small_Prop1();
    _Script_Engine::StaticMeshComponent*& get_SM_Star_Small_Prop();
    _Script_Engine::StaticMeshComponent*& get_SM_PassengerCarBody2();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_SharedRoot();
    void* get_New_Light_Color();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x360
#pragma pack(pop)
}
