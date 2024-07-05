#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_Interface_HUDComponents_UI_InGameNotification {
struct UI_InGameNotification_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_Interface_HUDComponents_UI_InGameNotificationList {
#pragma pack(push, 1)
struct UI_InGameNotificationList_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::VerticalBox*& get_VerticalBox();
    void* get_VerticalBoxSlotPadding();
    int32_t& get_LoopDex();
    _Game_Interface_HUDComponents_UI_InGameNotification::UI_InGameNotification_C*& get_NewNotification();
    void* get_RebirthWidgets();
    static _Script_CoreUObject::Class* static_class();
    void HandleNotificationAddition(_Script_UMG::Widget* HandledWidget);
    void OnInitialized0();
    void DisplayNotification(void* Notif_Text, void* TicketReward);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_InGameNotificationList(int32_t EntryPoint);
}; // Size: 0x2a0
#pragma pack(pop)
}
