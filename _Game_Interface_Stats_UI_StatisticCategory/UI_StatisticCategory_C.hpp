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
namespace _Game_Interface_Stats_UI_StatisticCategory {
#pragma pack(push, 1)
struct UI_StatisticCategory_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_Label();
    void* get_Category();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Refresh();
    void ExecuteUbergraph_UI_StatisticCategory(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
