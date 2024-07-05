#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface {
struct UI_PrivateMatchCodeInterface_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton {
struct UI_StoreTooltipButton_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct EditableTextBox;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Modals_UI_JoinLobbyModal {
#pragma pack(push, 1)
struct UI_JoinLobbyModal_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_CancelButton();
    _Script_UMG::EditableTextBox*& get_EditableTextBox_233();
    _Script_UMG::Image*& get_HeaderBackground();
    _Script_UMG::SizeBox*& get_HeaderBox();
    _Script_UMG::Image*& get_HeaderFrame();
    _Script_UMG::TextBlock*& get_HeaderLabel();
    _Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& get_JoinLobbyButton();
    void* get_WantsToHide();
    _Script_Engine::MaterialInstanceDynamic*& get_HeaderBGMat();
    void* get_ItemRarity();
    void* get_ItemName();
    void* get_CosmeticType();
    void* get_ItemDescription();
    bool get_bBuyingWithPlaycoins();
    void set_bBuyingWithPlaycoins(bool value);
    bool get_bOwned();
    void set_bOwned(bool value);
    int32_t& get_ItemId();
    _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C*& get_CodeInterfaceReference();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_JoinLobbyModal_CancelButton_K2Node_ComponentBoundEvent_7_ButtonReleased__DelegateSignature();
    void BndEvt__UI_JoinLobbyModal_JoinLobbyButton_K2Node_ComponentBoundEvent_8_ButtonReleased__DelegateSignature();
    void ExecuteUbergraph_UI_JoinLobbyModal(int32_t EntryPoint);
    void WantsToHide__DelegateSignature();
}; // Size: 0x320
#pragma pack(pop)
}
