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
namespace _Script_UMG {
struct Image;
}
namespace _Game_Interface_IngameScreens_UI_PlayerStatus {
struct UI_PlayerStatus_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_UI_GameIndicatorComponent {
#pragma pack(push, 1)
struct UI_GameIndicatorComponent_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ToyPartAdd();
    _Script_UMG::Image*& get_ToyIcon();
    _Script_UMG::TextBlock*& get_ToyPartText();
    _Script_UMG::TextBlock*& get_ToyPartText_1();
    _Game_Interface_IngameScreens_UI_PlayerStatus::UI_PlayerStatus_C*& get_UI_PlayerStatus();
    void* get_ToySelection();
    static _Script_CoreUObject::Class* static_class();
    void InitToyPart(void* ToySelection);
    void Update_Toy_Count(void*& Toys_Found);
    int32_t How_Many_Bools_True(void*& Input);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void ExecuteUbergraph_UI_GameIndicatorComponent(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
