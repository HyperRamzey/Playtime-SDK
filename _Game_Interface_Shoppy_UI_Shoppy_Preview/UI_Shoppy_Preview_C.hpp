#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton_New {
struct UI_MP_N_MenuButton_New_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo {
struct UI_LongCosmeticInfo_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter {
struct BP_MonsterAndPlayerMenuCharacter_C;
}
namespace _Game_Interface_MainMenu_BP_CameraMoverMain {
struct BP_CameraMoverMain_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Game_Interface_Shoppy_UI_Shoppy_Preview {
#pragma pack(push, 1)
struct UI_Shoppy_Preview_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x350]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BundleBackground();
    _Script_UMG::Overlay*& get_BundleDisplayContainer();
    _Script_UMG::UniformGridPanel*& get_BundleItemGrid();
    _Script_UMG::Button*& get_CharacterRotator();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& get_CloseLoading();
    _Script_UMG::Image*& get_DarkenPurchaseBackground();
    _Script_UMG::Image*& get_InfoBackground();
    _Script_UMG::Image*& get_ItemLoading();
    _Script_UMG::TextBlock*& get_ItemName();
    _Script_UMG::TextBlock*& get_ItemPrice();
    _Script_UMG::Overlay*& get_LoadOverlay();
    _Script_UMG::Image*& get_PLaycoinIcon();
    _Script_UMG::Image*& get_PreviewBundleTrace();
    _Script_UMG::Image*& get_PreviewSingleTrace();
    _Script_UMG::Image*& get_PurchaseBackground();
    _Script_UMG::Button*& get_PurchaseButton();
    _Script_UMG::TextBlock*& get_TimeAvailableNumber();
    _Script_UMG::Image*& get_TopBackground();
    _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo::UI_LongCosmeticInfo_C*& get_UI_LongCosmeticInfo();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    int32_t& get_ItemId();
    void* get_CosmeticStruct();
    bool get_IsRotating();
    void set_IsRotating(bool value);
    void* get_PreviousMousePosition();
    bool get_Finished();
    void set_Finished(bool value);
    float& get_TimeoutAfter();
    void* get_CloseLoadingScreen();
    void* get_EmotePreviewHandle();
    _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& get_MonsterPlayerMenuCharacter();
    _Script_Engine::Actor*& get_Spinning_Actor();
    _Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& get_CameraManager();
    int32_t& get_Preview_Item();
    _Script_Engine::Actor*& get_BundlePreviewActor();
    static _Script_CoreUObject::Class* static_class();
    void TransitionCosmeticCamera(void* Cosmetic_Type, void* Character_Type);
    void PostTransaction();
    void SetCharacterRefs(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player, _Script_Engine::SkeletalMeshActor* Monster, _Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C* PlayerMonsterMenuCharacter, _Script_Engine::Actor* Spinning_Actor);
    void SetPreviewCharacter(int32_t Preview_ID);
    void PopulatePreviewGrid();
    void PreviewItemHovered(int32_t PreviewItemID);
    void PreviewItemUnHovered();
    void InitializePreview(int32_t ItemId);
    void BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ConfirmPurchase();
    void BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller);
    void ResetRotation();
    void Construct0();
    void SetPreviewCharacterMain();
    void PreviewItemReleased(int32_t Preview_Item_ID);
    void BuyComplete();
    void BuyFail(void* ErrorMessage);
    void ExecuteUbergraph_UI_Shoppy_Preview(int32_t EntryPoint);
    void CloseLoadingScreen__DelegateSignature();
}; // Size: 0x5b0
#pragma pack(pop)
}
