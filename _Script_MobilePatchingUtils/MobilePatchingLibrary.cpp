#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MobileInstalledContent.hpp"
#include "MobilePatchingLibrary.hpp"
_Script_CoreUObject::Class* _Script_MobilePatchingUtils::MobilePatchingLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MobilePatchingUtils.MobilePatchingLibrary");
    return result;
}
void _Script_MobilePatchingUtils::MobilePatchingLibrary::RequestContent(void* RemoteManifestURL, void* CloudURL, void* InstallDirectory, void* OnSucceeded, void* OnFailed) {
    return;
}
bool _Script_MobilePatchingUtils::MobilePatchingLibrary::HasActiveWiFiConnection() {
    return;
}
void* _Script_MobilePatchingUtils::MobilePatchingLibrary::GetSupportedPlatformNames() {
    return;
}
_Script_MobilePatchingUtils::MobileInstalledContent* _Script_MobilePatchingUtils::MobilePatchingLibrary::GetInstalledContent(void* InstallDirectory) {
    return;
}
void* _Script_MobilePatchingUtils::MobilePatchingLibrary::GetActiveDeviceProfileName() {
    return;
}
