#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Play_UI_PlayCard {
#pragma pack(push, 1)
struct UI_PlayCard_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_94();
    _Script_UMG::Image*& get_Card();
    _Script_UMG::TextBlock*& get_Description();
    _Script_UMG::CanvasPanel*& get_RootCanvas();
    _Script_UMG::TextBlock*& get_Type();
    void* get_DescriptionText();
    void* get_TypeText();
    void* get_OnReleased();
    _Script_Engine::Texture2D*& get_CardBG();
    bool get_NewVar_0();
    void set_NewVar_0(bool value);
    void* get_HoveredScale();
    void* get_DefaultScale();
    float& get_HoverAnimationSpeed();
    static _Script_CoreUObject::Class* static_class();
    void* Get_Type_Text_0();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_PlayCard_Button_94_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__UI_PlayCard_Button_94_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_PlayCard_Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void Update_PlayCard();
    void ExecuteUbergraph_UI_PlayCard(int32_t EntryPoint);
    void OnReleased__DelegateSignature();
}; // Size: 0x2f0
#pragma pack(pop)
}
