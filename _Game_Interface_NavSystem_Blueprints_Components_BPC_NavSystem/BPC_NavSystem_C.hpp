#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain {
struct W_NavMain_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator {
struct W_NavIndicator_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass {
struct W_NavCompass_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator {
struct W_NavEnemyIndicator_C;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap {
struct W_NavMinimap_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar {
struct W_NavRadar_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap {
struct W_NavOnlyBigMap_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap {
struct W_NavBigMap_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement {
struct BPC_NavElement_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo {
struct BP_NavLevelInfo_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo {
struct S_NavWaypointInfo;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint {
struct BP_NavWaypoint_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
#pragma pack(push, 1)
struct BPC_NavSystem_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x218]; public:
    void* get_UberGraphFrame();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C*& get_MainWidgetRef();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator::W_NavIndicator_C*& get_IndicatorWidgetRef();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C*& get_EnemyIndicatorWidgetRef();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C*& get_CompassWidgetRef();
    bool get_UseCompass();
    void set_UseCompass(bool value);
    bool get_UseIndicator();
    void set_UseIndicator(bool value);
    bool get_UseEnemyIndicator();
    void set_UseEnemyIndicator(bool value);
    bool get_UseMinimap();
    void set_UseMinimap(bool value);
    bool get_UseRadar();
    void set_UseRadar(bool value);
    bool get_UseBigmap();
    void set_UseBigmap(bool value);
    _Script_Engine::Texture*& get_MinimapImage();
    void* get_MiniampPlayerIconWidgetClass();
    float& get_MinimapDimentions();
    _Script_Engine::Texture2D*& get_BigmapImage();
    float& get_BigmapDimentions();
    void* get_BigmapPlayerMarkIconClass();
    void* get_CompassDirections();
    float& get_CompassWidgetHalfWidth();
    _Script_Engine::CameraComponent*& get_PlayerCamComp();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C*& get_MinimapWidgetRef();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C*& get_RadarWidgetRef();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavOnlyBigMap::W_NavOnlyBigMap_C*& get_OnlyBigMapWidgetRef();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C*& get_BigmapWidgetRef();
    _Script_UMG::UserWidget*& get_MinimapPlayerIconRef();
    _Script_UMG::UserWidget*& get_RadarPlayerIconRef();
    _Script_UMG::UserWidget*& get_BigmapPlayerIconRef();
    _Script_Engine::Actor*& get_PlayerActor();
    void* get_ElementAry();
    void* get_BeforeReqElementAry();
    void* get_ApplyCamRot();
    float& get_IndicatorBorderSize();
    float& get_CompassViewAngle();
    void* get_CamOffset();
    float& get_MinimapZoom();
    bool get_IsRotateMinimap();
    void set_IsRotateMinimap(bool value);
    void* get_PrevIndicatorScreenLoc();
    float& get_CompassMinDistance();
    float& get_CompassMaxDistance();
    void* get_IndicatorMinDistance();
    void* get_IndicatorMaxDistance();
    float& get_EnemyIndicatorMinDistance();
    float& get_EnemyIndicatorMaxDistance();
    float& get_MinimapMinDistance();
    float& get_MinimapMaxDistance();
    float& get_RadarMinDistance();
    float& get_RadarMaxDistance();
    void* get_UseAxisType();
    _Script_Engine::Texture*& get_RadarMinimapImage();
    void* get_RadarPlayerIconWidgetClass();
    float& get_RadarDimentions();
    float& get_RadarZoom();
    float& get_RadarBorderSize();
    bool get_IsRotateRadar();
    void set_IsRotateRadar(bool value);
    void* get_WaypointInfoAry();
    bool get_UsePartyPlayerIcon();
    void set_UsePartyPlayerIcon(bool value);
    bool get_UseRunTimeCaptureImage();
    void set_UseRunTimeCaptureImage(bool value);
    bool get_IsInit();
    void set_IsInit(bool value);
    float& get_IndicatorMinDistance_0();
    float& get_IndicatorMinDistance_1();
    float& get_IndicatorMinDistance_2();
    float& get_IndicatorMinDistance_3();
    float& get_IndicatorMinDistance_4();
    float& get_IndicatorMaxDistance_0();
    float& get_IndicatorMaxDistance_1();
    float& get_IndicatorMaxDistance_2();
    float& get_IndicatorMaxDistance_3();
    float& get_IndicatorMaxDistance_4();
    void* get_NavElementMap();
    void* get_TempArray();
    static _Script_CoreUObject::Class* static_class();
    void HandleVisibilityBasedOnSettings(bool Condition);
    void SetMinMaxIndicatorDistancesToUnusable();
    void SetMinMaxIndicatorDistancesToDefault();
    bool CheckIndicatorElementDistance(_Script_Engine::Actor* ElementActor, _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Nav_Element);
    void Shutdown();
    void Initialize();
    void SetupFromLevelInfo(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo::BP_NavLevelInfo_C* IpLevelInfo);
    void GetWaypoint(_Script_CoreUObject::Vector2D IpLoc, _Game_Interface_NavSystem_Blueprints_Structures_S_NavWaypointInfo::S_NavWaypointInfo& Result);
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint::BP_NavWaypoint_C* SpawnWaypont(_Script_CoreUObject::Vector Loc);
    void DistanceToScreenLoc(_Script_Engine::Actor* Actor1, _Script_Engine::Actor* Actor2, float& X, float& Y);
    void AddZoomMinimap(float AddValue);
    bool CheckElementDistance(_Script_Engine::Actor* ElementActor, float Min, float Max);
    void ToggleEnemyIndicator();
    void ShowEnemyIndicator(bool IsShow);
    void UpdateUseWidgets();
    void UpdateRadar();
    void UpdateBigmap();
    void UpdateMinimap();
    void UpdateEnemyIndicator();
    void UpdateIndicator();
    void UpdateCompass();
    void CreatePlayerIcons();
    void AddEnemyIndicatorIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void SetPropIndicatorWidget(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element, _Script_CoreUObject::Vector2D Translation, float Angle, bool IsOffscreen, bool IsShow, _Script_UMG::UserWidget* IndicatorWidget);
    void UpdateEnemyIndicatorElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* IpElement, float IpRadius);
    float GetDistanceElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void UpdateCheckDistanceElements();
    void ToggleRadar();
    void ShowRadar(bool IsShow);
    void ToggleIndicator();
    void ShowIndicator(bool IsShow);
    void ToggleCompass();
    void ShowCompass(bool IsShow);
    void ToggleMinimap();
    void ShowMinimap(bool IsShow);
    void UpdateRadar_PlayerIcon();
    void UpdateRadarElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void AddRadarIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void ToggleRotateMinimap();
    void ToggleBigMap();
    void ShowBigMap(bool IsShow);
    void UpdateBigmapElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void AddBigmapIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void UpdateBigmap_PlayerIcon();
    void ShowElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element, bool IsVisible);
    void RemoveElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void UpdateMinimap_PlayerIcon();
    void UpdateMinimapElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void FindAngle(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B, float& Degree);
    _Script_CoreUObject::Vector2D FindCoord(float IpRadius, float IpDegrees);
    void AddMinimapIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    float GetElementDistance(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    _Script_CoreUObject::Vector GetPlayerCamLoc();
    void AddIndicatorIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void UpdateCompassElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* IpElement);
    void IsIndicatorInViewport(_Script_CoreUObject::Vector2D ScreenLoc, bool IsFlip, bool& Result);
    bool GetFlipElementLoc(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element, _Script_CoreUObject::Vector2D& ScreenLoc);
    bool IsFlipElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    bool WorldToScreen(_Script_CoreUObject::Vector WorldLoc, _Script_CoreUObject::Vector2D& ScreenLoc);
    _Script_CoreUObject::Vector2D GetScreenSize();
    void UpdateIndicatorElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void AddElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void AddCompassIcon(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* Element);
    void UpdateElements();
    void UpdateCompassDirectionWidgets();
    void Show(bool IpVisible);
    void OnPlayerTurned();
    void ReceiveTick0(float DeltaSeconds);
    void ReqAddElement(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C* NavElementComp);
    void ReceiveEndPlay0(void* EndPlayReason);
    void Server_SpawnWaypoint(_Script_CoreUObject::Vector InLoc);
    void ReceiveBeginPlay0();
    void SetNonEssentialHUDVisibility(bool Visible);
    void ExecuteUbergraph_BPC_NavSystem(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
