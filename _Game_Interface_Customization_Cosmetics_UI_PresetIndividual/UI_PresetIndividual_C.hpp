#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_PresetIndividual {
#pragma pack(push, 1)
struct UI_PresetIndividual_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Applied();
    _Script_UMG::Button*& get_Button_0();
    _Script_UMG::Button*& get_Button_54();
    _Script_UMG::TextBlock*& get_PresetName();
    void* get_Name();
    void* get_Preset();
    void* get_Type();
    void* get_DeletePreset();
    void* get_ApplyPreset();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Character();
    bool get_CanDelete();
    void set_CanDelete(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CheckIfApplied();
    void BndEvt__UI_PresetIndividual_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ConfirmDelete();
    void Construct0();
    void BndEvt__UI_PresetIndividual_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_PresetIndividual(int32_t EntryPoint);
    void ApplyPreset__DelegateSignature(_Script_Playtime_Multiplayer::PresetSlot Preset, void* Name);
    void DeletePreset__DelegateSignature(void* Preset, void* Type);
}; // Size: 0x320
#pragma pack(pop)
}
