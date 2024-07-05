#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct InvalidationBox;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Game_Interface_Customization_Cosmetics_UI_Appearance {
struct UI_Appearance_C;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticItem {
struct UI_CosmeticItem_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticSelectionGrid {
#pragma pack(push, 1)
struct UI_CosmeticSelectionGrid_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x88]; public:
    void* get_UberGraphFrame();
    _Script_UMG::ScrollBox*& get_Content();
    _Script_UMG::InvalidationBox*& get_InvalidationBox_0();
    _Script_UMG::UniformGridPanel*& get_UniformGridPanel_126();
    void* get_Type();
    void* get_ReleasedGesturesButton();
    void* get_Grid_OnHovered();
    void* get_Grid_OnUnHovered();
    void* get_Grid_OnReleased();
    _Game_Interface_Customization_Cosmetics_UI_Appearance::UI_Appearance_C*& get_UI_AppearanceParent();
    void* get_CharacterType();
    void* get_Grid_OnPopulate();
    static _Script_CoreUObject::Class* static_class();
    void PopulateGrid(void*& Array, bool Loaded_);
    void SetItems(void* Type, void* For, void*& Inventory);
    void OnHoveredEvent(int32_t ID);
    void OnUnHoveredEvent(int32_t Item_ID);
    void OnReleasedEvent(int32_t Item_ID, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller);
    void OnPopulateGrid(int32_t Equipped_Item_ID);
    void PreloadDefaultCosmetics(void* Type, void* CharacterType);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_CosmeticSelectionGrid(int32_t EntryPoint);
    void Grid_OnPopulate__DelegateSignature(int32_t Equipped_Item_ID);
    void Grid_OnReleased__DelegateSignature(int32_t Item_ID, void* Type, _Game_Interface_Customization_Cosmetics_UI_CosmeticItem::UI_CosmeticItem_C* Caller, void* CosmeticFor);
    void Grid_OnUnHovered__DelegateSignature(int32_t Item_ID);
    void Grid_OnHovered__DelegateSignature(int32_t Item_ID);
    void ReleasedGesturesButton__DelegateSignature(int32_t Slot, int32_t Gesture);
}; // Size: 0x2e8
#pragma pack(pop)
}
