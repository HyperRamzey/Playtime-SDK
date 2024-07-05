#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AutomationUtils {
#pragma pack(push, 1)
struct AutomationUtilsBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void TakeGameplayAutomationScreenshot(void* ScreenshotName, float MaxGlobalError, float MaxLocalError, void* MapNameOverride);
}; // Size: 0x28
#pragma pack(pop)
}
