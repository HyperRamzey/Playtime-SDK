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
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_LongCosmeticInfo {
#pragma pack(push, 1)
struct UI_LongCosmeticInfo_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BackgroundGradient();
    _Script_UMG::TextBlock*& get_ItemName();
    _Script_UMG::HorizontalBox*& get_RaritySlot();
    _Script_UMG::TextBlock*& get_RarityText();
    _Script_UMG::Image*& get_Thumbnail();
    _Script_UMG::Image*& get_ThumbnailBG();
    _Script_UMG::Overlay*& get_ThumbnailContainer();
    _Script_UMG::TextBlock*& get_TypeText();
    static _Script_CoreUObject::Class* static_class();
    void SetVisualsLongCosmeticInfo(int32_t ItemId);
    void ExecuteUbergraph_UI_LongCosmeticInfo(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
}
