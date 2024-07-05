#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_Interface_Stats_UI_StatsScreen {
#pragma pack(push, 1)
struct UI_StatsScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_234();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Script_UMG::VerticalBox*& get_VerticalBox_128();
    void* get_Back();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void RefreshStats();
    void BndEvt__UI_StatsScreen_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature();
    void ExecuteUbergraph_UI_StatsScreen(int32_t EntryPoint);
    void Back__DelegateSignature();
}; // Size: 0x290
#pragma pack(pop)
}
