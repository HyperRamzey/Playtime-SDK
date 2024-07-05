#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_UI_HealthCheck {
#pragma pack(push, 1)
struct UI_HealthCheck_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x8]; public:
    float& get_RetryDuration();
    static _Script_CoreUObject::Class* static_class();
    void EnablePurchase(bool bInIsEnabled);
}; // Size: 0x268
#pragma pack(pop)
}
