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
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Misc_UI_HandPadCharge {
#pragma pack(push, 1)
struct UI_HandPadCharge_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_56();
    _Script_UMG::ProgressBar*& get_ProgressBar_37();
    _Script_CoreUObject::Object*& get_HandPadLeft();
    _Script_CoreUObject::Object*& get_HandPadRight();
    static _Script_CoreUObject::Class* static_class();
    float GetPercent_0();
    void UpdateChargeBarLeft(float CurrentCharge, float MaxCharge);
    void UpdateChargeBarRight(float CurrentCharge, float MaxCharge);
    void ExecuteUbergraph_UI_HandPadCharge(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
