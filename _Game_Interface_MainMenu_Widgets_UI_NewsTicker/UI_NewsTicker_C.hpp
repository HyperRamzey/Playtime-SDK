#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Widgets_UI_NewsTicker {
#pragma pack(push, 1)
struct UI_NewsTicker_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_AnnocunementButton();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Image*& get_BorderHighlight();
    _Script_UMG::Image*& get_BottomTInt();
    _Script_UMG::Image*& get_Frame();
    _Script_Engine::MaterialInstanceDynamic*& get_NewsTickerMat();
    void* get_AnnoucnmentButtonPressed();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void BndEvt__UI_NewsTicker_AnnocunementButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_NewsTicker_AnnocunementButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_NewsTicker_AnnocunementButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_NewsTicker(int32_t EntryPoint);
    void AnnoucnmentButtonPressed__DelegateSignature();
}; // Size: 0x2a8
#pragma pack(pop)
}
