#include "..\FUObjectArray.hpp"
#include "BP_FactoryTile_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\InstancedStaticMeshComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_AngleRandomness() {
    return *(float*)((uintptr_t)this + 0x248);
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::set_Channel_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::InstancedStaticMeshComponent*& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_TileInstance() {
    return *(_Script_Engine::InstancedStaticMeshComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::BillboardComponent*& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Handle() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x230);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Collision() {
    return (void*)((uintptr_t)this + 0x2d0);
}
int32_t& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Amount_X() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
int32_t& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Amount_Y() {
    return *(int32_t*)((uintptr_t)this + 0x23c);
}
float& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Distance__Meters_() {
    return *(float*)((uintptr_t)this + 0x240);
}
float& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_HeightRandomness() {
    return *(float*)((uintptr_t)this + 0x244);
}
_Script_Engine::InstancedStaticMeshComponent*& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_InstancedMeshes() {
    return *(_Script_Engine::InstancedStaticMeshComponent**)((uintptr_t)this + 0x2c8);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Seed() {
    return (void*)((uintptr_t)this + 0x24c);
}
_Script_Engine::StaticMesh*& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_TileMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x258);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Materials() {
    return (void*)((uintptr_t)this + 0x260);
}
float& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_WhiteTilePercentage() {
    return *(float*)((uintptr_t)this + 0x270);
}
int32_t& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_InstanceCount() {
    return *(int32_t*)((uintptr_t)this + 0x2c0);
}
float& _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_InstanceColorOffset() {
    return *(float*)((uintptr_t)this + 0x274);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_InstancesColor_01() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_SingleColor() {
    return (void*)((uintptr_t)this + 0x2ac);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_InstancesColor_02() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_InstancesColor_03() {
    return (void*)((uintptr_t)this + 0x298);
}
bool _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_bUseSingleColorOnInstances() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::set_bUseSingleColorOnInstances(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Channel_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 1 != 0;
}
bool _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Channel_1() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 1 != 0;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::set_Channel_1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Channel_2() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 1 != 0;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::set_Channel_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::get_Mobility() {
    return (void*)((uintptr_t)this + 0x2bf);
}
_Script_CoreUObject::Class* _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Tools/Art/SetDress/FactoryTile/BP_FactoryTile.BP_FactoryTile_C");
    return result;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::SetInstancesColors(_Script_Engine::InstancedStaticMeshComponent* InputPin) {
    return;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::UserConstructionScript0() {
    return;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::Colorize() {
    return;
}
void _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C::ExecuteUbergraph_BP_FactoryTile(int32_t EntryPoint) {
    return;
}
