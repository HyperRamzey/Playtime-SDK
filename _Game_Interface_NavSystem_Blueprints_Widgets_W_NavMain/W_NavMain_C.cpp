#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap\W_NavBigMap_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass\W_NavCompass_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator\W_NavEnemyIndicator_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator\W_NavIndicator_C.hpp"
#include "W_NavMain_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap\W_NavMinimap_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar\W_NavRadar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::get_W_BigMap() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavBigMap::W_NavBigMap_C**)((uintptr_t)this + 0x260);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator::W_NavIndicator_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::get_W_Indicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavIndicator::W_NavIndicator_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::get_W_Compass() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavCompass::W_NavCompass_C**)((uintptr_t)this + 0x268);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::get_W_EnemyIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavEnemyIndicator::W_NavEnemyIndicator_C**)((uintptr_t)this + 0x270);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::get_W_Minimap() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavMinimap::W_NavMinimap_C**)((uintptr_t)this + 0x280);
}
_Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C*& _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::get_W_Radar() {
    return *(_Game_Interface_NavSystem_Blueprints_Widgets_W_NavRadar::W_NavRadar_C**)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Widgets_W_NavMain::W_NavMain_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Widgets/W_NavMain.W_NavMain_C");
    return result;
}
