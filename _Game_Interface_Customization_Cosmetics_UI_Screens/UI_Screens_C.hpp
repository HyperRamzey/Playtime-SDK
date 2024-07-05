#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_ScreenItem {
struct UI_ScreenItem_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Screens {
#pragma pack(push, 1)
struct UI_Screens_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x110]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_RandomScreenBG();
    _Script_UMG::Button*& get_RandomScreenButton();
    _Script_UMG::TextBlock*& get_RandomText();
    _Script_UMG::VerticalBox*& get_ScreenContainer();
    _Script_UMG::ScrollBox*& get_ScreenScrollbox();
    void* get_Type();
    _Script_Playtime_Multiplayer::CustomizationSaveGame*& get_Customization_Save_Game();
    void* get_CurrentConfig();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_MainMenuCharacter();
    void* get_OwnedScreenMap();
    void* get_ScreenUIArray();
    void* get_RequestScreenPreview();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ScreenItemHovered(void* ScreenImage);
    void ScreenItemUnHovered();
    void BndEvt__UI_Screens_RandomScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void SetRandomButtonStyle();
    void PreConstruct0(bool IsDesignTime);
    void Selected(_Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Screen, int32_t ScreenID);
    void Repopulate(void*& Items);
    void GotInventory(void*& Inventory);
    void Error(void* ErrorMessage);
    void FavoritedPressed(int32_t ID, _Game_Interface_Customization_Cosmetics_UI_ScreenItem::UI_ScreenItem_C* Object);
    void BndEvt__UI_Screens_RandomScreenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Screens_RandomScreenButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Refresh();
    void ExecuteUbergraph_UI_Screens(int32_t EntryPoint);
    void RequestScreenPreview__DelegateSignature(void* Screen);
}; // Size: 0x370
#pragma pack(pop)
}
