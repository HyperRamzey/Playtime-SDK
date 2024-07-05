#include "..\FUObjectArray.hpp"
#include "ARSharedWorldPlayerController.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSharedWorldPlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSharedWorldPlayerController");
    return result;
}
void _Script_AugmentedReality::ARSharedWorldPlayerController::ServerMarkReadyForReceiving() {
    return;
}
void _Script_AugmentedReality::ARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, void*& Buffer) {
    return;
}
void _Script_AugmentedReality::ARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, void*& Buffer) {
    return;
}
void _Script_AugmentedReality::ARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize) {
    return;
}
