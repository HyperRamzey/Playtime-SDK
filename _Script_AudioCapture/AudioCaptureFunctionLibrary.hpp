#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioCapture {
struct AudioCapture;
}
namespace _Script_AudioCapture {
#pragma pack(push, 1)
struct AudioCaptureFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_AudioCapture::AudioCapture* CreateAudioCapture();
}; // Size: 0x28
#pragma pack(pop)
}
