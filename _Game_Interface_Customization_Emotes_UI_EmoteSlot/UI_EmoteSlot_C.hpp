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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Emotes_UI_EmoteSlot {
#pragma pack(push, 1)
struct UI_EmoteSlot_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Overlay*& get_Container();
    _Script_UMG::Image*& get_Icon();
    int32_t& get_ItemId();
    float& get_Rotation();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void SetHovered(bool Hovered);
    void UpdateVisuals();
    void SetItemID(int32_t ItemId);
    void ExecuteUbergraph_UI_EmoteSlot(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
