#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap {
struct W_NavBigMap_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass {
struct W_NavCompass_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator {
struct W_NavEnemyIndicator_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar {
struct W_NavRadar_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator {
struct W_NavIndicator_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap {
struct W_NavMinimap_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain {
#pragma pack(push, 1)
struct W_NavMain_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x30]; public:
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C*& get_W_BigMap();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C*& get_W_Compass();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C*& get_W_EnemyIndicator();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator::W_NavIndicator_C*& get_W_Indicator();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C*& get_W_Minimap();
    _Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C*& get_W_Radar();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x290
#pragma pack(pop)
}
