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
namespace _Script_UMG {
struct InvalidationBox;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_ScoreboardEntry {
#pragma pack(push, 1)
struct UI_ScoreboardEntry_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Avatar();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::TextBlock*& get_Data1();
    _Script_UMG::TextBlock*& get_Data2();
    _Script_UMG::Image*& get_Image_141();
    _Script_UMG::InvalidationBox*& get_InvalidationBox_0();
    _Script_UMG::TextBlock*& get_PlayerName();
    _Script_UMG::TextBlock*& get_Tickets();
    _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& get_CachedMonster();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_Character();
    static _Script_CoreUObject::Class* static_class();
    void UpdateScoreboardEntry(_Script_Engine::PlayerState* Player, float BackgroundOpacity);
    void ExecuteUbergraph_UI_ScoreboardEntry(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)
}
