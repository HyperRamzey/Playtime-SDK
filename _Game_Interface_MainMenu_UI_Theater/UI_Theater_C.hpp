#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct\F_TheaterTapesStruct.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_UMG {
struct Button;
}
namespace _Game_Interface_General_UI_BackButton {
struct UI_BackButton_C;
}
namespace _Game_Interface_MainMenu_UI_MP_N_MenuButton_New {
struct UI_MP_N_MenuButton_New_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_SubtitlesData_Subtitles_UI {
struct Subtitles_UI_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
struct UI_EarlyAccess_Overlay_C;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_UI_Theater {
#pragma pack(push, 1)
struct UI_Theater_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xf0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FullScreenAnim();
    _Script_UMG::WidgetAnimation*& get_ChangeTape();
    _Script_UMG::WidgetAnimation*& get_Init();
    _Script_UMG::Button*& get_Button_84();
    _Script_UMG::Button*& get_Button_234();
    _Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& get_fs();
    _Script_UMG::Image*& get_FullScreen();
    _Script_UMG::Overlay*& get_FullScreenOverlay();
    _Script_UMG::Image*& get_Image_59();
    _Script_UMG::Overlay*& get_Information();
    _Script_UMG::Image*& get_Locked();
    _Script_UMG::Button*& get_PauseButton();
    _Script_UMG::Button*& get_PlayButton();
    _Script_UMG::Button*& get_RestartButton();
    _Script_UMG::TextBlock*& get_TapeName();
    _Script_UMG::TextBlock*& get_TextInfo();
    _Game_Interface_General_UI_BackButton::UI_BackButton_C*& get_UI_BackButton();
    _Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& get_UI_EarlyAccess_Overlay();
    _Script_Engine::Actor*& get_MovieScreen();
    _Script_MediaAssets::MediaPlayer*& get_Media();
    _Script_MediaAssets::MediaSource*& get_Movie();
    bool get_Played();
    void set_Played(bool value);
    void* get_BackReleased();
    _Script_Engine::DataTable*& get_Subtitle_Data_Table();
    void* get_Subtitle_Row_Name();
    _Game_SubtitlesData_Subtitles_UI::Subtitles_UI_C*& get_VHS_Tape_Subtitle();
    int32_t& get_Number_Of_Subtitles();
    static _Script_CoreUObject::Class* static_class();
    void Remove_Current_Subtitle();
    void Create_a_New_Subtitle();
    void OpenAudioSource();
    void SetMovieInfo(_Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct Info, bool Unlocked);
    void Construct0();
    void BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller);
    void Refresh();
    void BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature();
    void BndEvt__UI_Theater_Button_84_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void Update_Localization();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_Theater(int32_t EntryPoint);
    void BackReleased__DelegateSignature();
}; // Size: 0x350
#pragma pack(pop)
}
