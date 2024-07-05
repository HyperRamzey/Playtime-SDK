#include "..\FUObjectArray.hpp"
#include "AppleImageUtilsBaseAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Texture.hpp"
_Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(_Script_Engine::Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, void* Rotate) {
    return;
}
void* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::get_ConversionResult() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy");
    return result;
}
_Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(_Script_Engine::Texture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, void* Rotate) {
    return;
}
_Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(_Script_Engine::Texture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, void* Rotate) {
    return;
}
_Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy* _Script_AppleImageUtils::AppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(_Script_Engine::Texture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, void* Rotate) {
    return;
}
