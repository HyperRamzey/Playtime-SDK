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
struct TextBlock;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Customization_Cosmetics_UI_CosmeticInfo {
#pragma pack(push, 1)
struct UI_CosmeticInfo_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Image*& get_Gradient();
    _Script_UMG::TextBlock*& get_ItemName();
    _Script_UMG::HorizontalBox*& get_RaritySlot();
    _Script_UMG::TextBlock*& get_RarityText();
    _Script_UMG::TextBlock*& get_SlotText();
    _Script_UMG::Image*& get_Thumbnail();
    int32_t& get_previewitem();
    bool get_HasBG();
    void set_HasBG(bool value);
    bool get_HasThumbnail();
    void set_HasThumbnail(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetItem(int32_t Item);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_CosmeticInfo(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
}
