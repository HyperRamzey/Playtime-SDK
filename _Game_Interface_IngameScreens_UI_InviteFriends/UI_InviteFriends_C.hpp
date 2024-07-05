#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_Interface_General_UI_BasicButton {
struct UI_BasicButton_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_InviteFriends {
#pragma pack(push, 1)
struct UI_InviteFriends_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x80]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_T_FriendName();
    _Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& get_UI_BasicButton();
    void* get_Friend();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__UI_InviteFriends_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void ExecuteUbergraph_UI_InviteFriends(int32_t EntryPoint);
}; // Size: 0x2e0
#pragma pack(pop)
}
