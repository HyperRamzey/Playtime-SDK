#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Sabotages_UI_SelectableSabotage {
#pragma pack(push, 1)
struct UI_SelectableSabotage_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_ActiveBG();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_CheckIcon();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_LevelBG();
    _Script_UMG::TextBlock*& get_LevelText();
    _Script_UMG::Image*& get_lockStatusIcon();
    _Script_UMG::Button*& get_SabButton();
    _Script_UMG::Image*& get_SelectedBG();
    bool get_Unlocked();
    void set_Unlocked(bool value);
    int32_t& get_Level();
    void* get_SabotageButtonReleased();
    bool get_Selected();
    void set_Selected(bool value);
    bool get_Active();
    void set_Active(bool value);
    void* get_Sabotage();
    int32_t& get_EditorPreviewLevel();
    bool get_EditorPreviewUnlocked();
    void set_EditorPreviewUnlocked(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Update_Visuals(int32_t Level, bool Unlocked, bool Active);
    void BndEvt__UI_SelectableSabotage_SabButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Select();
    void Deselect();
    void BndEvt__UI_SelectableSabotage_SabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SelectableSabotage_SabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SelectableSabotage(int32_t EntryPoint);
    void SabotageButtonReleased__DelegateSignature(void* Type);
}; // Size: 0x2e0
#pragma pack(pop)
}
