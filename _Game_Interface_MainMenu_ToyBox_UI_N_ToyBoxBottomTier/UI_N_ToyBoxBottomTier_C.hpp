#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_N_ToyBoxBottomTier {
#pragma pack(push, 1)
struct UI_N_ToyBoxBottomTier_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_82();
    _Script_UMG::Image*& get_Image_41();
    int32_t& get_AssociatedPage();
    void* get_OnToyBoxTierClicked();
    static _Script_CoreUObject::Class* static_class();
    void SetActive(bool Condition);
    void BndEvt__UI_N_BattlePassBottomTier_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_N_ToyBoxBottomTier(int32_t EntryPoint);
    void OnToyBoxTierClicked__DelegateSignature(int32_t Page);
}; // Size: 0x290
#pragma pack(pop)
}
