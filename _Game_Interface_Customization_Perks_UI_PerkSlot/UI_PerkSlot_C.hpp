#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Overlay;
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
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Perks_UI_PerkSlot {
#pragma pack(push, 1)
struct UI_PerkSlot_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x2e0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Border*& get_Border_40();
    _Script_UMG::Button*& get_Button_97();
    _Script_UMG::Overlay*& get_LevelBullshit();
    _Script_UMG::Image*& get_LevelContainer();
    _Script_UMG::TextBlock*& get_LevelLabel();
    _Script_UMG::Image*& get_PerkBG();
    _Script_UMG::Image*& get_PerkIcon();
    void* get_PerkSlotSelected();
    void* get_DefaultSlotStyle();
    void* get_MyPerk();
    bool get_bIsSelected();
    void set_bIsSelected(bool value);
    _Script_Engine::Texture2D*& get_UnequippedBG();
    _Script_Engine::Texture2D*& get_EquippedBG();
    static _Script_CoreUObject::Class* static_class();
    void ClearSlot();
    void EquipPerk(void* Perk, bool EquipSuccess, void*& Perk_Inventory);
    void BndEvt__UI_PerkSlot_Button_97_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void SelectButton();
    void DeselectButton();
    void InitPerkSlot(void* Perk, void*& PerkInventory);
    void Construct0();
    void BndEvt__UI_PerkSlot_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_PerkSlot_Button_97_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_PerkSlot(int32_t EntryPoint);
    void PerkSlotSelected__DelegateSignature(_Game_Interface_Customization_Perks_UI_PerkSlot::UI_PerkSlot_C* Slot);
}; // Size: 0x540
#pragma pack(pop)
}
