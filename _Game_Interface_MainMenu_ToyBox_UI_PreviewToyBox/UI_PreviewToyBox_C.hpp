#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon {
struct UI_PreviewToyBoxIcon_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBox {
#pragma pack(push, 1)
struct UI_PreviewToyBox_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xc8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::UniformGridPanel*& get_Grid();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_1();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_2();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_3();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_4();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_5();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_6();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_7();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_8();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_9();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_10();
    _Game_Interface_MainMenu_ToyBox_UI_PreviewToyBoxIcon::UI_PreviewToyBoxIcon_C*& get_UI_PreviewBattlePassIcon_11();
    int32_t& get_NumTiersToPreview();
    int32_t& get_GridWidth();
    void* get_StupidTimer();
    void* get_StupidToyBox();
    bool get_DoWeHaveStupidToyBox();
    void set_DoWeHaveStupidToyBox(bool value);
    bool get_DoWeHaveStupidLevel();
    void set_DoWeHaveStupidLevel(bool value);
    int32_t& get_StupidLevel();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void RefreshPreviewToyBox();
    void GetToyBoxSuccess(_Script_Playtime_Multiplayer::ToyBoxResponse ToyBox);
    void OnFailure(void* ErrorMessage);
    void TryToPreview();
    void GetLevelSuccess(_Script_Playtime_Multiplayer::LevelResponse Response);
    void ExecuteUbergraph_UI_PreviewToyBox(int32_t EntryPoint);
}; // Size: 0x328
#pragma pack(pop)
}
