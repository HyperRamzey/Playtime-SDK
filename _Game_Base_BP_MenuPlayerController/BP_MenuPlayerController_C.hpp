#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerController.hpp"
namespace _Game_Interface_MainMenu_UI_MainMenu {
struct UI_MainMenu_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_BP_MenuPlayerController {
#pragma pack(push, 1)
struct BP_MenuPlayerController_C : public _Script_Playtime_Multiplayer::PlaytimePlayerController {
    private: char pad_570[0x18]; public:
    void* get_UberGraphFrame();
    bool get_CanEscQuit();
    void set_CanEscQuit(bool value);
    _Game_Interface_MainMenu_UI_MainMenu::UI_MainMenu_C*& get_Menu();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetCursorWorldLocation();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MenuPlayerController(int32_t EntryPoint);
}; // Size: 0x588
#pragma pack(pop)
}
