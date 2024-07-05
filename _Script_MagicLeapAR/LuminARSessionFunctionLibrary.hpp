#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_MagicLeapAR {
struct LuminARSessionConfig;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminARSessionFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void StartLuminARSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, _Script_MagicLeapAR::LuminARSessionConfig* Configuration);
}; // Size: 0x28
#pragma pack(pop)
}
