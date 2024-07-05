#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter {
struct BP_CustomizationMenuCharacter_C;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_PresetIndividual {
struct UI_PresetIndividual_C;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_Playtime_Multiplayer {
struct CustomizationSaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Presets {
#pragma pack(push, 1)
struct UI_Presets_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_107();
    _Script_UMG::TextBlock*& get_CategoryText();
    _Script_UMG::TextBlock*& get_CategoryText_1();
    _Script_UMG::TextBlock*& get_NoPresets();
    _Script_UMG::ScrollBox*& get_ScrollBox_154();
    _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C*& get_UI_PresetIndividual();
    _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C*& get_UI_PresetIndividual_1();
    _Game_Interface_Customization_Cosmetics_UI_PresetIndividual::UI_PresetIndividual_C*& get_UI_PresetIndividual_2();
    _Script_UMG::UniformGridPanel*& get_UniformGridPanel_66();
    void* get_Type();
    _Script_Playtime_Multiplayer::CustomizationSaveGame*& get_Customization_Save_Game();
    void* get_CurrentConfig();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Character();
    _Game_Gameplay_Character_Menu_BP_CustomizationMenuCharacter::BP_CustomizationMenuCharacter_C*& get_MainMenuCharacter();
    static _Script_CoreUObject::Class* static_class();
    void Update_Localization();
    _Script_Playtime_Multiplayer::PresetSlot FilterOutEmotes(_Script_Playtime_Multiplayer::PresetSlot Input);
    bool PresetNameSimilar(void*& TargetArray, void*& ItemToFind);
    void EquipAllInPreset(void* Name);
    void* GetPresetsByType(_Script_Playtime_Multiplayer::CustomizationSaveGame* SaveGame);
    void LoadPresets(_Script_Playtime_Multiplayer::CustomizationSaveGame* CustomizationSave);
    void RefreshPresets();
    void BndEvt__UI_Presets_Button_107_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void MakeNewPreset(void* Name);
    void DeletePreset(void* Name, void* Type);
    void ApplyPreset(_Script_Playtime_Multiplayer::PresetSlot Preset, void* Name);
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_Presets(int32_t EntryPoint);
}; // Size: 0x328
#pragma pack(pop)
}
