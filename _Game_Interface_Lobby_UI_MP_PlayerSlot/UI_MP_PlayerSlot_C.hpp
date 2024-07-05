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
namespace _Game_Base_GS_Escape {
struct GS_Escape_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Lobby_UI_MP_PlayerSlot {
#pragma pack(push, 1)
struct UI_MP_PlayerSlot_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Image*& get_Monster();
    _Script_UMG::TextBlock*& get_NameLabel();
    _Script_UMG::Image*& get_ReadyCheckbox();
    _Script_UMG::SizeBox*& get_SB_Monster();
    _Script_UMG::Image*& get_StatusBackground();
    _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& get_PlayerRef();
    _Game_Base_GS_Escape::GS_Escape_C*& get_GameStateRef();
    static _Script_CoreUObject::Class* static_class();
    void OnInitialized0();
    void Construct0();
    void UpdateName();
    void UpdateReadiness();
    void UpdateMonsterQueueSystem();
    void ExecuteUbergraph_UI_MP_PlayerSlot(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
