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
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_HUDComponents_Comms_UI_CommsSlot {
#pragma pack(push, 1)
struct UI_CommsSlot_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x60]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::TextBlock*& get_CommText();
    _Script_UMG::Overlay*& get_Container();
    _Script_UMG::Image*& get_Icon();
    void* get_CommSelected();
    void* get_CommType();
    void* get_ButtonText();
    float& get_Rotation();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Set_Hovered(bool Index);
    void ExecuteUbergraph_UI_CommsSlot(int32_t EntryPoint);
    void CommSelected__DelegateSignature(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C* CalledCom);
}; // Size: 0x2c0
#pragma pack(pop)
}
