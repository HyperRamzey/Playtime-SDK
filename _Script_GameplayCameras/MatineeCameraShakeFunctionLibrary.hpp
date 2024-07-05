#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CameraShakeBase;
}
namespace _Script_GameplayCameras {
struct MatineeCameraShake;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct MatineeCameraShakeFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_GameplayCameras::MatineeCameraShake* Conv_MatineeCameraShake(_Script_Engine::CameraShakeBase* CameraShake);
}; // Size: 0x28
#pragma pack(pop)
}
