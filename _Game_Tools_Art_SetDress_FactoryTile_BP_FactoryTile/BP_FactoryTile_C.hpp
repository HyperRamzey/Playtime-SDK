#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct InstancedStaticMeshComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile {
#pragma pack(push, 1)
struct BP_FactoryTile_C : public _Script_Engine::Actor {
    private: char pad_220[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::InstancedStaticMeshComponent*& get_TileInstance();
    _Script_Engine::BillboardComponent*& get_Handle();
    int32_t& get_Amount_X();
    int32_t& get_Amount_Y();
    float& get_Distance__Meters_();
    float& get_HeightRandomness();
    float& get_AngleRandomness();
    void* get_Seed();
    _Script_Engine::StaticMesh*& get_TileMesh();
    void* get_Materials();
    float& get_WhiteTilePercentage();
    float& get_InstanceColorOffset();
    void* get_InstancesColor_01();
    void* get_InstancesColor_02();
    void* get_InstancesColor_03();
    bool get_bUseSingleColorOnInstances();
    void set_bUseSingleColorOnInstances(bool value);
    void* get_SingleColor();
    bool get_Channel_0();
    void set_Channel_0(bool value);
    bool get_Channel_1();
    void set_Channel_1(bool value);
    bool get_Channel_2();
    void set_Channel_2(bool value);
    void* get_Mobility();
    int32_t& get_InstanceCount();
    _Script_Engine::InstancedStaticMeshComponent*& get_InstancedMeshes();
    void* get_Collision();
    static _Script_CoreUObject::Class* static_class();
    void SetInstancesColors(_Script_Engine::InstancedStaticMeshComponent* InputPin);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void Colorize();
    void ExecuteUbergraph_BP_FactoryTile(int32_t EntryPoint);
}; // Size: 0x2d8
#pragma pack(pop)
}
