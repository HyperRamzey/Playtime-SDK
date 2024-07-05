#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Perks_UI_SelectablePerk {
#pragma pack(push, 1)
struct UI_SelectablePerk_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Highlight();
    _Script_UMG::Image*& get_ActiveBG();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_CheckIcon();
    _Script_UMG::Image*& get_Icon();
    _Script_UMG::Image*& get_LevelBG();
    _Script_UMG::TextBlock*& get_LevelText();
    _Script_UMG::Image*& get_lockStatusIcon();
    _Script_UMG::Button*& get_PerkButton();
    _Script_UMG::Image*& get_SelectedBG();
    _Script_UMG::Overlay*& get_SelectedContainer();
    bool get_Unlocked();
    void set_Unlocked(bool value);
    int32_t& get_Level();
    void* get_Perk();
    void* get_PerkButtonReleased();
    bool get_Selected();
    void set_Selected(bool value);
    bool get_Active();
    void set_Active(bool value);
    bool get_EditorPreviewActive();
    void set_EditorPreviewActive(bool value);
    bool get_EditorPreviewUnlocked();
    void set_EditorPreviewUnlocked(bool value);
    int32_t& get_EditorPreviewLevel();
    bool get_NewVar_0();
    void set_NewVar_0(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_SelectablePerk_TheButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Update_Visuals(bool Active, int32_t Level, bool Unlocked);
    void Select();
    void Deselect();
    void MarkEquipped(bool Equipped);
    void BndEvt__UI_SelectablePerk_PerkButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_SelectablePerk_PerkButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SelectablePerk(int32_t EntryPoint);
    void PerkButtonReleased__DelegateSignature(void* Type);
}; // Size: 0x2f0
#pragma pack(pop)
}
