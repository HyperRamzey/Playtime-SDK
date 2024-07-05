#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_Scoreboard {
#pragma pack(push, 1)
struct UI_Scoreboard_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_MonsterLabel();
    _Script_UMG::VerticalBox*& get_MonstersContainer();
    _Script_UMG::VerticalBox*& get_PlayersContainer();
    _Script_UMG::TextBlock*& get_PlayersLabel();
    _Script_UMG::VerticalBox*& get_ScoreboardContainer();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void UpdateScoreboard();
    void Update_Localization();
    void Construct0();
    void ExecuteUbergraph_UI_Scoreboard(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
