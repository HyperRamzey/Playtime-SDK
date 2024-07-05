#include "..\FUObjectArray.hpp"
#include "BPI_WidgetInputReceiver_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
void _Game_Interface_BPI_WidgetInputReceiver::BPI_WidgetInputReceiver_C::EscapeReleased() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_BPI_WidgetInputReceiver::BPI_WidgetInputReceiver_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/BPI_WidgetInputReceiver.BPI_WidgetInputReceiver_C");
    return result;
}
void _Game_Interface_BPI_WidgetInputReceiver::BPI_WidgetInputReceiver_C::EscapePressed() {
    return;
}
