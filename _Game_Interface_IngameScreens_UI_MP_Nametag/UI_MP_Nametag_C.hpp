#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_IngameScreens_UI_MP_Nametag {
#pragma pack(push, 1)
struct UI_MP_Nametag_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_Dot();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::TextBlock*& get_Tag();
    static _Script_CoreUObject::Class* static_class();
    void UpdateVisibility();
    void SetName(void* UserName);
    void SetColor(_Script_CoreUObject::LinearColor Color);
    void Construct0();
    void ExecuteUbergraph_UI_MP_Nametag(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
