#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_UI_EarlyAccess_Overlay {
#pragma pack(push, 1)
struct UI_EarlyAccess_Overlay_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x10]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_TextBlock_43();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_EarlyAccess_Overlay(int32_t EntryPoint);
}; // Size: 0x270
#pragma pack(pop)
}
