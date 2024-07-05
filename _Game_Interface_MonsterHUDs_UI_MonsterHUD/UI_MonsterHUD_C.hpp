#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct InvalidationBox;
}
namespace _Game_Interface_HUDComponents_UI_CrosshairComponent {
struct UI_CrosshairComponent_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_HUDComponents_UI_AbilitiesComponent {
struct UI_AbilitiesComponent_C;
}
namespace _Game_Interface_MonsterHUDs_UI_AFKCountDown {
struct UI_AFKCountDown_C;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteHolder {
struct UI_EmoteHolder_C;
}
namespace _Game_Interface_HUDComponents_UI_GameIndicatorComponent {
struct UI_GameIndicatorComponent_C;
}
namespace _Game_Interface_HUDComponents_UI_InGameNotificationList {
struct UI_InGameNotificationList_C;
}
namespace _Game_Interface_IngameScreens_UI_SabotageIconContainer {
struct UI_SabotageIconContainer_C;
}
namespace _Game_Interface_HUDComponents_UI_TimerComponent {
struct UI_TimerComponent_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
#pragma pack(push, 1)
struct UI_MonsterHUD_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x88]; public:
    void* get_UberGraphFrame();
    _Script_UMG::InvalidationBox*& get_InvalidationBox_0();
    _Script_UMG::InvalidationBox*& get_InvalidationBox_2();
    _Script_UMG::Image*& get_ObjectiveCheck();
    _Script_UMG::Image*& get_PrimaryObjectiveIcon_1();
    _Script_UMG::TextBlock*& get_PrimaryObjectiveText_1();
    _Game_Interface_HUDComponents_UI_AbilitiesComponent::UI_AbilitiesComponent_C*& get_UI_AbilitiesComponent();
    _Game_Interface_MonsterHUDs_UI_AFKCountDown::UI_AFKCountDown_C*& get_UI_AFKCountDown();
    _Game_Interface_HUDComponents_UI_CrosshairComponent::UI_CrosshairComponent_C*& get_UI_CrosshairComponent();
    _Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& get_UI_EmoteHolder();
    _Game_Interface_HUDComponents_UI_GameIndicatorComponent::UI_GameIndicatorComponent_C*& get_UI_GameIndicatorComponent();
    _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C*& get_UI_InGameNotificationList();
    _Game_Interface_IngameScreens_UI_SabotageIconContainer::UI_SabotageIconContainer_C*& get_UI_SabotageIconContainer();
    _Game_Interface_HUDComponents_UI_TimerComponent::UI_TimerComponent_C*& get_UI_TimerComponent();
    void* get_PreviousSecondaryObj();
    void* get_MonsterClickedEmote();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    void CheckDownPlayers();
    void SetNonEssentialHUDVisibility(bool Visible);
    void BndEvt__UI_MonsterHUD_UI_EmoteHolder_K2Node_ComponentBoundEvent_0_ClickedEmote__DelegateSignature(int32_t Index);
    void Construct0();
    void StartAFKTimer();
    void EndAFKTimer();
    void UpdateToyCount(void*& ToysFound);
    void ShowEmotes(void* Character);
    void SetSabotageIcon(void*& SabotageName);
    void SetCrosshairProgress(float Progress);
    void SetCrosshairColor(_Script_CoreUObject::LinearColor Color);
    void ResetRadialRecharge();
    void RadialRecharge(float Duration);
    void PlayRechargeAnim(int32_t AbilityIndex, float Cooldown);
    void PlayHitmarker();
    void PlayAttackAnimation(float Duration);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_MonsterHUD(int32_t EntryPoint);
    void MonsterClickedEmote__DelegateSignature(int32_t Index);
}; // Size: 0x2e8
#pragma pack(pop)
}
