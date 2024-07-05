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
struct TextBlock;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Content_UI_N_Loading {
struct UI_N_Loading_C;
}
namespace _Game_Interface_MainMenu_Play_UI_FindingGame {
#pragma pack(push, 1)
struct UI_FindingGame_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_96();
    _Script_UMG::TextBlock*& get_StatusText();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& get_UI_N_Loading();
    void* get_CachedResults();
    int32_t& get_CurrentIndex();
    bool get_Cancelled();
    void set_Cancelled(bool value);
    void* get_Back();
    void* get_WantsToTryHosting();
    static _Script_CoreUObject::Class* static_class();
    void ShowErrorFindingGame();
    void ShowErrorHosting();
    void Construct0();
    void Show_Joining();
    void Show_Searching();
    void SetCancelButtonVisibility(bool IsVisible);
    void BndEvt__UI_FindingGame_UI_BackButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature();
    void ExecuteUbergraph_UI_FindingGame(int32_t EntryPoint);
    void WantsToTryHosting__DelegateSignature();
    void Back__DelegateSignature();
}; // Size: 0x2c0
#pragma pack(pop)
}
