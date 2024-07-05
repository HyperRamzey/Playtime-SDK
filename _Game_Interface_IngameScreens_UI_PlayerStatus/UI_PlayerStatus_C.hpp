#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_Base_GS_Escape {
struct GS_Escape_C;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Game_Interface_IngameScreens_UI_PlayerStatusItem {
struct UI_PlayerStatusItem_C;
}
namespace _Game_Interface_IngameScreens_UI_PlayerStatus {
#pragma pack(push, 1)
struct UI_PlayerStatus_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x88]; public:
    void* get_UberGraphFrame();
    _Script_UMG::VerticalBox*& get_VerticalBox_82();
    void* get_Status();
    _Game_Base_GS_Escape::GS_Escape_C*& get_GS_Escape();
    void* get_ShortenedPlayerNameArray();
    void* get_ShortenedPlayerName();
    static _Script_CoreUObject::Class* static_class();
    void GetPlayersStatus(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C* PlayerState, _Game_Interface_IngameScreens_UI_PlayerStatusItem::UI_PlayerStatusItem_C*& NewParam);
    void UpdatePlayers();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void UpdatePlayerHoldingToyPart(_Script_Engine::PlayerState* PlayerState, _Script_Engine::Texture2D* ToyPart, bool IsHoldingToyPart, void* Toy_Type);
    void ExecuteUbergraph_UI_PlayerStatus(int32_t EntryPoint);
}; // Size: 0x2e8
#pragma pack(pop)
}
