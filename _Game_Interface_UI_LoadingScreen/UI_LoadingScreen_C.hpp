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
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_UI_LoadingScreen {
#pragma pack(push, 1)
struct UI_LoadingScreen_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_Anim_Loading();
    _Script_UMG::Button*& get_B_Cancel();
    _Script_UMG::Image*& get_black_bg();
    _Script_UMG::Image*& get_FadeInBG();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_136();
    _Script_UMG::Image*& get_LoadingScreen();
    _Script_UMG::Image*& get_Overlay();
    _Script_UMG::Image*& get_P_Logo();
    _Script_UMG::TextBlock*& get_T_LoadingMessage();
    _Script_UMG::TextBlock*& get_T_TimeoutTime();
    _Script_UMG::TextBlock*& get_TextBlock_74();
    void* get_Posters();
    void* get_LoadingMessage();
    void* get_TimeoutTimer();
    bool get_IsConnecting();
    void set_IsConnecting(bool value);
    bool get_DisplayTimer();
    void set_DisplayTimer(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* GetText_0();
    void ClearTimer();
    void* GetTimeoutText();
    void OnFailure_F68ED22C430FAEAB863EDF93B38CF1AC();
    void OnSuccess_F68ED22C430FAEAB863EDF93B38CF1AC();
    void BndEvt__UI_LoadingScreen_B_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct0(bool IsDesignTime);
    void OnTimeout();
    void Construct0();
    void ClearLoadingMessage();
    void ReconnectingLoadingMessage();
    void OnGotInventory(void*& Inventory);
    void SilentlyFail(void* ErrorMessage);
    void ExecuteUbergraph_UI_LoadingScreen(int32_t EntryPoint);
}; // Size: 0x300
#pragma pack(pop)
}
