#include "..\FUObjectArray.hpp"
#include "F_PointsBundle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::get_BundleID_3_E56D43AB4AA13228AD5BBA9A94544780() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::get_NumberOfCoins_5_CE2A11494CE31C38855574BB1259E7D2() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::get_Price_9_07EFC5144CE4143C9EDD6389FBD50612() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::get_Bonus_11_21FC0A4349885632D8F690840598732B() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::get_BestValue_14_6F01EE244B6F9A9BB9F6FCB82308B729() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::set_BestValue_14_6F01EE244B6F9A9BB9F6FCB82308B729(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_BuyPoints_F_PointsBundle::F_PointsBundle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Interface/MainMenu/BuyPoints/F_PointsBundle.F_PointsBundle");
    return result;
}
