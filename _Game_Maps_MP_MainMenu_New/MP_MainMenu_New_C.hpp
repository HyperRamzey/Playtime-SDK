#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile {
struct BP_FactoryTile_C;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
struct BP_MonsterAndPlayerMenuCharacter_C;
}
namespace _Script_Engine {
struct SpotLight;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Game_Gameplay_Game_MenuTheater_BP_MovieScreen {
struct BP_MovieScreen_C;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Maps_MP_MainMenu_New {
#pragma pack(push, 1)
struct MP_MainMenu_New_C : public _Script_Engine::LevelScriptActor {
    private: char pad_228[0x178]; public:
    void* get_UberGraphFrame();
    _Script_MediaAssets::MediaPlayer*& get_StaticTarg();
    float& get_TurntableYawTarget();
    bool get_RotatingCharacter();
    void set_RotatingCharacter(bool value);
    float& get_TurntableYaw();
    void* get_ReturnToDefaultOrientationTimer();
    void* get_Instances_Color_01();
    void* get_Instances_Color_02();
    void* get_Instances_Color_03();
    _Script_Engine::MaterialInterface*& get_ArchwayMat();
    _Script_Engine::MaterialInterface*& get_LeftLegMat();
    _Script_Engine::MaterialInterface*& get_RightLegMat();
    _Script_Engine::MaterialInterface*& get_TopBarMat();
    void* get_HallwayLightColor();
    float& get_HallwayLightIntensity();
    _Script_Engine::MaterialInterface*& get_HallwayLightFunction();
    bool get_Visibility();
    void set_Visibility(bool value);
    void* get_UserCorrelation();
    void* get_SteamCorrelation();
    _Script_Engine::StaticMeshActor*& get_Meshes_Cube_11_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_4mx1m2_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_4mx1m5_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_4mx1m6_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_4mx1m3_12_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_4mx1m4_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_4mx1m7_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Meshes_Cube_6_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Meshes_Cube_7_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Meshes_Cube_5_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C*& get_BP_FactoryTile4_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C*& get_BP_FactoryTile2_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C*& get_BP_FactoryTile0_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::SpotLight*& get_ShadowCaster_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Meshes_Cube_13_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Meshes_Cube_12_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_BattlePassMonster_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Script_Engine::StaticMeshActor*& get_SM_Pipe_round_short_399_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_BP_MonsterAndPlayerMenuCharacter2_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_BP_CustomizationMenuCharacter2_87_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_ShoppyPreviewCharacter_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Gameplay_Game_MenuTheater_BP_MovieScreen::BP_MovieScreen_C*& get_BP_MovieScreen_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_BP_CameraMoverMain_2_ExecuteUbergraph_MP_MainMenu_New_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void GetPlatformData(bool& bUsers200, bool& bInventory200, bool& bCollection200);
    bool EnterPlatformSave(bool bUsers200, bool bInventory200, bool bCollection200);
    void ChangeMainMenu(float HallwayLightIntensity, _Script_CoreUObject::LinearColor HallwayLightColor, _Script_Engine::MaterialInterface* HallwayLightFunction, _Script_CoreUObject::LinearColor InstancesColor_01, _Script_CoreUObject::LinearColor InstancesColor_02, _Script_CoreUObject::LinearColor InstancesColor_03, _Script_Engine::MaterialInterface* ArchwayMaterial, _Script_Engine::MaterialInterface* LeftLegMaterial, _Script_Engine::MaterialInterface* RightLegMaterial, _Script_Engine::MaterialInterface* TopBarMaterial, _Script_Engine::SpotLight* HallwaySpotlight, _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C* FactoryTile_01, _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C* FactoryTile_02, _Game_Tools_Art_SetDress_FactoryTile_BP_FactoryTile::BP_FactoryTile_C* FactoryTile_03, _Script_Engine::StaticMeshActor* Archway_01, _Script_Engine::StaticMeshActor* Archway_02, _Script_Engine::StaticMeshActor* Archway_03, _Script_Engine::StaticMeshActor* LeftLeg_01, _Script_Engine::StaticMeshActor* LeftLeg_02, _Script_Engine::StaticMeshActor* LeftLeg_03, _Script_Engine::StaticMeshActor* RightLeg_01, _Script_Engine::StaticMeshActor* RightLeg_02, _Script_Engine::StaticMeshActor* RightLeg_03, _Script_Engine::StaticMeshActor* TopBar_01, _Script_Engine::StaticMeshActor* TopBar_02, _Script_Engine::StaticMeshActor* TopBar_03);
    void ChangeMenu();
    void ReturnToDefaultOrientation();
    void MouseDragged(_Script_CoreUObject::Vector2D Delta_Mouse);
    void UpdateRotatingCharacter(bool Update_Rotating_Character);
    void ReceiveTick(float DeltaSeconds);
    void BackendFailure(void* ErrorMessage);
    void CreateUserError(void* ErrorMessage);
    void CreateUserSuccess();
    void ReceiveBeginPlay();
    void Fail(void* ErrorMessage);
    void MigrationSuccess();
    void ExecuteUbergraph_MP_MainMenu_New(int32_t EntryPoint);
}; // Size: 0x3a0
#pragma pack(pop)
}
