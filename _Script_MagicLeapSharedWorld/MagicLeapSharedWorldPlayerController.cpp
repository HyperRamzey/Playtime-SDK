#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "MagicLeapSharedWorldAlignmentTransforms.hpp"
#include "MagicLeapSharedWorldLocalData.hpp"
#include "MagicLeapSharedWorldPlayerController.hpp"
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms) {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController");
    return result;
}
bool _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::CanSendLocalDataToServer() {
    return;
}
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldLocalData& LocalWorldReplicationData) {
    return;
}
bool _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::IsChosenOne() {
    return;
}
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne) {
    return;
}
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData() {
    return;
}
