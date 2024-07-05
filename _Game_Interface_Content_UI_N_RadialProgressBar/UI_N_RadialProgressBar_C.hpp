#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Content_UI_N_RadialProgressBar {
#pragma pack(push, 1)
struct UI_N_RadialProgressBar_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_33();
    float& get_Progress();
    float& get_End_Progress();
    float& get_Outer_Thickness();
    float& get_Inner_Thickness();
    float& get_Density();
    void* get_Fill_Color();
    void* get_Background_Color();
    _Script_Engine::MaterialInstanceDynamic*& get_Material();
    static _Script_CoreUObject::Class* static_class();
    _Script_SlateCore::SlateBrush GetBrush_0();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_N_RadialProgressBar(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
