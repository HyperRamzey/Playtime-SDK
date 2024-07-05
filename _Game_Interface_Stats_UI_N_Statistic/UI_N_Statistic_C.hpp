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
namespace _Game_Interface_Stats_UI_N_Statistic {
#pragma pack(push, 1)
struct UI_N_Statistic_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::TextBlock*& get_Number();
    void* get_NameIn();
    void* get_Value();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_N_Statistic(int32_t EntryPoint);
}; // Size: 0x298
#pragma pack(pop)
}
