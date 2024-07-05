#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_AppleImageUtils {
#pragma pack(push, 1)
struct AppleImageUtilsBaseAsyncTaskBlueprintProxy : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    void* get_ConversionResult();
    static _Script_CoreUObject::Class* static_class();
    _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(_Script_Engine::Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, void* Rotate);
    _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(_Script_Engine::Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, void* Rotate);
    _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(_Script_Engine::Texture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, void* Rotate);
    _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(_Script_Engine::Texture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, void* Rotate);
}; // Size: 0x88
#pragma pack(pop)
}
