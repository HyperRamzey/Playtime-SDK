#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneTracks\MovieSceneCameraShakeEvaluator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct MovieSceneMatineeCameraShakeEvaluator : public _Script_MovieSceneTracks::MovieSceneCameraShakeEvaluator {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
