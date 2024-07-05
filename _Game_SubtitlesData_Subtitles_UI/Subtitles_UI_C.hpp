#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_SubtitlesData_Simple_Subtitles {
struct Simple_Subtitles;
}
namespace _Game_SubtitlesData_Subtitles_UI {
#pragma pack(push, 1)
struct Subtitles_UI_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xe8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Maximize();
    _Script_UMG::WidgetAnimation*& get_Minimize();
    _Script_UMG::WidgetAnimation*& get_LittleBounce();
    _Script_UMG::Button*& get_Button();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::ScaleBox*& get_ScaleBox_39();
    _Script_UMG::ScaleBox*& get_ScaleBox_79();
    _Script_UMG::HorizontalBox*& get_Subtitle();
    _Script_UMG::CanvasPanel*& get_SubtitleBox();
    _Script_UMG::TextBlock*& get_SubtitleText();
    float& get_Inner_Distance();
    float& get_Outer_Distance();
    void* get_Distance_Location();
    int32_t& get_Subtitle_Priority();
    _Script_Engine::DataTable*& get_Subtitles_Data();
    void* get_Subtitle_IDs();
    void* get_Quick_Subtitle_IDs();
    int32_t& get_Subtitle_State();
    float& get_Render_Scale();
    float& get_Subtitle_Start_Audio_Time();
    void* get_Interval_Subtitle_Times();
    float& get_Subtitle_End_Audio_Time();
    float& get_Subtitle_Opacity();
    bool get_Maximized();
    void set_Maximized(bool value);
    void* get_Subtitle_Row_Name();
    bool get_Paused();
    void set_Paused(bool value);
    float& get_Amount_of_Paused_Audio_Time();
    float& get_Audio_Time_At_Pause();
    static _Script_CoreUObject::Class* static_class();
    void Parse_Quick_Subtitle_IDs();
    void Find_Current_Subtitle_State(int32_t& Current_Subtitle);
    void Get_Subtitle_Variables_From_ID(int32_t Row, _Game_SubtitlesData_Simple_Subtitles::Simple_Subtitles& Subtitle);
    void Hide_Subtitle_Background_if_Empty(void*& Text, void*& OutText);
    void Update_Subtitle_Text(bool Updating_Language, bool Only_Update_Current_Langauge);
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void Minimize_Subtitle();
    void Maximize_Subtitle();
    void Instant_Minimize();
    void Pause();
    void Play();
    void Set_Paused(bool Pause);
    void Update_Subtitle_Visiblity();
    void Update_Distance();
    void ExecuteUbergraph_Subtitles_UI(int32_t EntryPoint);
}; // Size: 0x348
#pragma pack(pop)
}
