#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement {
#pragma pack(push, 1)
struct BPC_NavElement_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0xb0]; public:
    void* get_UberGraphFrame();
    void* get_CompassIconWidgetClass();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_NavSystem();
    _Script_UMG::UserWidget*& get_CompassIconWidgetRef();
    void* get_IndicatorIconWidgetClass();
    _Script_UMG::UserWidget*& get_IndicatorIconWidgetRef();
    void* get_EnemyIndicatorIconWidgetClass();
    void* get_MinimapIconWidgetClass();
    _Script_UMG::UserWidget*& get_EnemyIndicatorIconWidgetRef();
    _Script_UMG::UserWidget*& get_MinimapIconWidgetRef();
    void* get_BigmapIconWidgetClass();
    void* get_RadarIconWidgetClass();
    bool get_IsRotate_MinimapIcon();
    void set_IsRotate_MinimapIcon(bool value);
    _Script_UMG::UserWidget*& get_RadarIconWidgetRef();
    _Script_UMG::UserWidget*& get_BigmapIconWidgetRef();
    bool get_IsVisible();
    void set_IsVisible(bool value);
    void* get_PrevIndicatorScreenLoc();
    bool get_IsRotate_BigIcon();
    void set_IsRotate_BigIcon(bool value);
    bool get_IsRotate_RadarIcon();
    void set_IsRotate_RadarIcon(bool value);
    void* get_IndicatorWorldOffset();
    float& get_MinDistance();
    float& get_MaxDistance();
    bool get_IsCheckDistance();
    void set_IsCheckDistance(bool value);
    bool get_IsUse();
    void set_IsUse(bool value);
    bool get_IsInit();
    void set_IsInit(bool value);
    int32_t& get_Channel();
    bool get_ShouldIndicatorFade();
    void set_ShouldIndicatorFade(bool value);
    float& get_Ratio();
    static _Script_CoreUObject::Class* static_class();
    void Adjust_Opacity(float MyDist, float ClosestDist);
    void Use(bool IsUse);
    void ShowUserWidget(_Script_UMG::UserWidget* UserWidget, bool IsShow);
    bool CheckDistance(float Distance);
    _Script_CoreUObject::Vector GetOwnerIndicatorLoc();
    void RemoveWidgetFromParent();
    void Show(bool IsVisible);
    void ReceiveBeginPlay0();
    void SetCompassIconWidget(_Script_UMG::UserWidget* CompassMarkWidget);
    void ReceiveEndPlay0(void* EndPlayReason);
    void Start();
    void Init();
    void ReInit(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C* InNavSystem);
    void ExecuteUbergraph_BPC_NavElement(int32_t EntryPoint);
}; // Size: 0x160
#pragma pack(pop)
}
