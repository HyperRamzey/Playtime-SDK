#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_BuyPoints_F_PointsBundle {
#pragma pack(push, 1)
struct F_PointsBundle {
    private: char pad_0[0x40]; public:
    int32_t& get_BundleID_3_E56D43AB4AA13228AD5BBA9A94544780();
    int32_t& get_NumberOfCoins_5_CE2A11494CE31C38855574BB1259E7D2();
    void* get_Price_9_07EFC5144CE4143C9EDD6389FBD50612();
    void* get_Bonus_11_21FC0A4349885632D8F690840598732B();
    bool get_BestValue_14_6F01EE244B6F9A9BB9F6FCB82308B729();
    void set_BestValue_14_6F01EE244B6F9A9BB9F6FCB82308B729(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
