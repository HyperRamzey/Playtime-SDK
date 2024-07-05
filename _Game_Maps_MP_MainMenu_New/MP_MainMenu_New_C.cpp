#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter\BP_CustomizationMenuCharacter_C.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter\BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Game_Gameplay_Game_MenuTheater_BP_MovieScreen\BP_MovieScreen_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "MP_MainMenu_New_C.hpp"
#include "..\_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile\BP_FactoryTile_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_Engine\SpotLight.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::MigrationSuccess() {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Meshes_Cube_13_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x358);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::CreateUserSuccess() {
    return;
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::set_RotatingCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::ChangeMenu() {
    return;
}
float& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_TurntableYawTarget() {
    return *(float*)((uintptr_t)this + 0x238);
}
_Script_MediaAssets::MediaPlayer*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_StaticTarg() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x230);
}
bool _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_RotatingCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 1 != 0;
}
float& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_TurntableYaw() {
    return *(float*)((uintptr_t)this + 0x240);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_ReturnToDefaultOrientationTimer() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::Fail(void* ErrorMessage) {
    return;
}
_Script_Engine::SpotLight*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_ShadowCaster_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::SpotLight**)((uintptr_t)this + 0x350);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Instances_Color_01() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Instances_Color_02() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Instances_Color_03() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Maps/MP_MainMenu_New.MP_MainMenu_New_C");
    return result;
}
_Script_Engine::MaterialInterface*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_ArchwayMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x280);
}
_Script_Engine::MaterialInterface*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_LeftLegMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x288);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::CreateUserError(void* ErrorMessage) {
    return;
}
_Script_Engine::MaterialInterface*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_RightLegMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x290);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_ShoppyPreviewCharacter_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x388);
}
_Script_Engine::MaterialInterface*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_TopBarMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x298);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_HallwayLightColor() {
    return (void*)((uintptr_t)this + 0x2a0);
}
float& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_HallwayLightIntensity() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
_Script_Engine::MaterialInterface*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_HallwayLightFunction() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x2b8);
}
bool _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Visibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::set_Visibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::BackendFailure(void* ErrorMessage) {
    return;
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_UserCorrelation() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_SteamCorrelation() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Meshes_Cube_11_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x2e8);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_4mx1m2_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x2f0);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_4mx1m5_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x2f8);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_4mx1m6_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x300);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_4mx1m3_12_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x308);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_4mx1m4_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x310);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::UpdateRotatingCharacter(bool Update_Rotating_Character) {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_4mx1m7_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x318);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::ExecuteUbergraph_MP_MainMenu_New(int32_t EntryPoint) {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Meshes_Cube_6_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x320);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Meshes_Cube_7_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Meshes_Cube_5_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x330);
}
_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_FactoryTile4_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C**)((uintptr_t)this + 0x338);
}
_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_FactoryTile2_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C**)((uintptr_t)this + 0x340);
}
_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_FactoryTile0_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C**)((uintptr_t)this + 0x348);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_Meshes_Cube_12_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x360);
}
_Script_Engine::SkeletalMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BattlePassMonster_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x368);
}
_Script_Engine::StaticMeshActor*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_SM_Pipe_round_short_399_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x370);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_MonsterAndPlayerMenuCharacter2_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x378);
}
_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_CustomizationMenuCharacter2_87_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C**)((uintptr_t)this + 0x380);
}
_Game_Gameplay_Game_MenuTheater_BP_MovieScreen::BP_MovieScreen_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_MovieScreen_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Gameplay_Game_MenuTheater_BP_MovieScreen::BP_MovieScreen_C**)((uintptr_t)this + 0x390);
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::get_BP_CameraMoverMain_2_ExecuteUbergraph_MP_MainMenu_New_RefProperty() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x398);
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::GetPlatformData(bool& bUsers200, bool& bInventory200, bool& bCollection200) {
    return;
}
bool _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::EnterPlatformSave(bool bUsers200, bool bInventory200, bool bCollection200) {
    return;
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::ChangeMainMenu(float HallwayLightIntensity, _Script_CoreUObject::LinearColor HallwayLightColor, _Script_Engine::MaterialInterface* HallwayLightFunction, _Script_CoreUObject::LinearColor InstancesColor_01, _Script_CoreUObject::LinearColor InstancesColor_02, _Script_CoreUObject::LinearColor InstancesColor_03, _Script_Engine::MaterialInterface* ArchwayMaterial, _Script_Engine::MaterialInterface* LeftLegMaterial, _Script_Engine::MaterialInterface* RightLegMaterial, _Script_Engine::MaterialInterface* TopBarMaterial, _Script_Engine::SpotLight* HallwaySpotlight, _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C* FactoryTile_01, _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C* FactoryTile_02, _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C* FactoryTile_03, _Script_Engine::StaticMeshActor* Archway_01, _Script_Engine::StaticMeshActor* Archway_02, _Script_Engine::StaticMeshActor* Archway_03, _Script_Engine::StaticMeshActor* LeftLeg_01, _Script_Engine::StaticMeshActor* LeftLeg_02, _Script_Engine::StaticMeshActor* LeftLeg_03, _Script_Engine::StaticMeshActor* RightLeg_01, _Script_Engine::StaticMeshActor* RightLeg_02, _Script_Engine::StaticMeshActor* RightLeg_03, _Script_Engine::StaticMeshActor* TopBar_01, _Script_Engine::StaticMeshActor* TopBar_02, _Script_Engine::StaticMeshActor* TopBar_03) {
    return;
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::ReturnToDefaultOrientation() {
    return;
}
void _Game_Maps_MP_MainMenu_New::MP_MainMenu_New_C::MouseDragged(_Script_CoreUObject::Vector2D Delta_Mouse) {
    return;
}
