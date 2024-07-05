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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MonsterHUDs_UI_AFKCountDown {
#pragma pack(push, 1)
struct UI_AFKCountDown_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ShowAFKKick();
    _Script_UMG::TextBlock*& get_AFKKickText();
    int32_t& get_TimeRemaining();
    void* get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void StartCountdownTimer();
    void CancelCountdownTimer();
    void UpdateText();
    void TickTimer();
    void ExecuteUbergraph_UI_AFKCountDown(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
