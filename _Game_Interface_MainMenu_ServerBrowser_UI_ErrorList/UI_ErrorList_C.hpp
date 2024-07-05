#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct InvalidationBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_ErrorList {
#pragma pack(push, 1)
struct UI_ErrorList_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x10]; public:
    _Script_UMG::InvalidationBox*& get_InvalidationBox_1();
    _Script_UMG::VerticalBox*& get_VerticalBox_45();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}