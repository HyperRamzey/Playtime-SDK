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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Sabotages_UI_SabotageSlot {
#pragma pack(push, 1)
struct UI_SabotageSlot_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Border*& get_Border_40();
    _Script_UMG::Button*& get_Button_97();
    _Script_UMG::Overlay*& get_LevelBullshit();
    _Script_UMG::Image*& get_LevelContainer();
    _Script_UMG::TextBlock*& get_LevelLabel();
    _Script_UMG::Image*& get_SabBG();
    _Script_UMG::Image*& get_SabIcon();
    bool get_bIsSelected();
    void set_bIsSelected(bool value);
    void* get_SabSlotSelected();
    void* get_Selected_Sabotage();
    static _Script_CoreUObject::Class* static_class();
    void EquipSabotage(void* SelectedSabotage, bool EquipSuccess, void*& Perk_Inventory);
    void ClearSlot();
    void ExecuteUbergraph_UI_SabotageSlot(int32_t EntryPoint);
    void SabSlotSelected__DelegateSignature(_Game_Interface_Customization_Sabotages_UI_SabotageSlot::UI_SabotageSlot_C* Slot);
}; // Size: 0x2c0
#pragma pack(pop)
}
