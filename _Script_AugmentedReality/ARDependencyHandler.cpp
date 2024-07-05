#include "..\FUObjectArray.hpp"
#include "ARDependencyHandler.hpp"
#include "ARSessionConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
void _Script_AugmentedReality::ARDependencyHandler::StartARSessionLatent(_Script_CoreUObject::Object* WorldContextObject, _Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARDependencyHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARDependencyHandler");
    return result;
}
void _Script_AugmentedReality::ARDependencyHandler::RequestARSessionPermission(_Script_CoreUObject::Object* WorldContextObject, _Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::LatentActionInfo LatentInfo, void*& OutPermissionResult) {
    return;
}
void _Script_AugmentedReality::ARDependencyHandler::InstallARService(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void*& OutInstallResult) {
    return;
}
_Script_AugmentedReality::ARDependencyHandler* _Script_AugmentedReality::ARDependencyHandler::GetARDependencyHandler() {
    return;
}
void _Script_AugmentedReality::ARDependencyHandler::CheckARServiceAvailability(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, void*& OutAvailability) {
    return;
}
