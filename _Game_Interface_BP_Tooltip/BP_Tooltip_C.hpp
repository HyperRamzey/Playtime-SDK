#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Interface_HUDComponents_UI_Tooltip {
struct UI_Tooltip_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_BP_Tooltip {
#pragma pack(push, 1)
struct BP_Tooltip_C : public _Script_Engine::Actor {
    private: char pad_220[0x40]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_Billboard();
    _Script_UMG::WidgetComponent*& get_Widget();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Tooltip();
    _Game_Interface_HUDComponents_UI_Tooltip::UI_Tooltip_C*& get_W_Tooltip();
    float& get_Duration();
    static _Script_CoreUObject::Class* static_class();
    void SelfDestruct();
    void ReceiveBeginPlay0();
    void SetNonEssentialHUDVisibility(bool Visible);
    void ExecuteUbergraph_BP_Tooltip(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
