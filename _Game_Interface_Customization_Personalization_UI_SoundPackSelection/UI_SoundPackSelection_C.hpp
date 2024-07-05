#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Personalization_UI_SoundPackSelection {
#pragma pack(push, 1)
struct UI_SoundPackSelection_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::VerticalBox*& get_VerticalBox_88();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_0();
    void* get_Sound_Pack_Type();
    bool get_IsWallpaper();
    void set_IsWallpaper(bool value);
    void* get_SoundPacksRequestChangeText();
    bool get_IsSurvivor();
    void set_IsSurvivor(bool value);
    void* get_SoundPacksOnChanged();
    static _Script_CoreUObject::Class* static_class();
    void SwitchCategory(void* SoundPackType);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Clicked(int32_t ID);
    void UpdateVisuals();
    void SuccessfulInventoryGet(void*& Inventory);
    void Populate(void*& Array);
    void FailedInventoryGet(void* ErrorMessage);
    void ExecuteUbergraph_UI_SoundPackSelection(int32_t EntryPoint);
    void SoundPacksOnChanged__DelegateSignature(void* Type);
    void SoundPacksRequestChangeText__DelegateSignature(void* Title);
}; // Size: 0x2a8
#pragma pack(pop)
}
