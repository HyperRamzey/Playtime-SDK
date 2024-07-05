#include "..\FUObjectArray.hpp"
#include "AutomationUtilsBlueprintLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AutomationUtils::AutomationUtilsBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AutomationUtils.AutomationUtilsBlueprintLibrary");
    return result;
}
void _Script_AutomationUtils::AutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(void* ScreenshotName, float MaxGlobalError, float MaxLocalError, void* MapNameOverride) {
    return;
}
