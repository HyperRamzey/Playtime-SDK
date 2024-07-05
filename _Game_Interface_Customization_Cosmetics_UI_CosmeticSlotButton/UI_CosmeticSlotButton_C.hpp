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
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticSlotButton {
#pragma pack(push, 1)
struct UI_CosmeticSlotButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Selection();
    _Script_UMG::Button*& get_Button_0();
    _Script_UMG::Image*& get_Image_243();
    void* get_CosmeticSlot();
    _Script_CoreUObject::Object*& get_Parent();
    void* get_CosmeticFor();
    void* get_Released();
    static _Script_CoreUObject::Class* static_class();
    void IsActive();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_CosmeticSlotButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void SetSelectedCosmetic(int32_t Item);
    void ResetSelectedCosmetic();
    void SetSelected(bool Selected);
    void ExecuteUbergraph_UI_CosmeticSlotButton(int32_t EntryPoint);
    void Released__DelegateSignature(void* Type);
}; // Size: 0x2a8
#pragma pack(pop)
}
