#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Content_UI_PlaytimeButton {
#pragma pack(push, 1)
struct UI_PlaytimeButton_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_FullButton();
    _Script_UMG::Button*& get_HollowButton();
    _Script_UMG::TextBlock*& get_TextBlock_79();
    bool get_Hollow();
    void set_Hollow(bool value);
    void* get_Released();
    void* get_Label();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_PlaytimeButton_FullButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_PlaytimeButton_HollowButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_PlaytimeButton(int32_t EntryPoint);
    void Released__DelegateSignature();
}; // Size: 0x2b0
#pragma pack(pop)
}
