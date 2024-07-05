#include "..\FUObjectArray.hpp"
#include "UI_HealthCheck_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
float& _Game_Interface_UI_HealthCheck::UI_HealthCheck_C::get_RetryDuration() {
    return *(float*)((uintptr_t)this + 0x260);
}
void _Game_Interface_UI_HealthCheck::UI_HealthCheck_C::EnablePurchase(bool bInIsEnabled) {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_UI_HealthCheck::UI_HealthCheck_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/UI_HealthCheck.UI_HealthCheck_C");
    return result;
}
