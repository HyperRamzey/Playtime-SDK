#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminARFrameFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool LuminARLineTrace(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D& ScreenPosition, void* TraceChannels, void*& OutHitResults);
    void* GetTrackingState();
}; // Size: 0x28
#pragma pack(pop)
}
