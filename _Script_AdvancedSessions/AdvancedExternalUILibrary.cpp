#include "..\FUObjectArray.hpp"
#include "AdvancedExternalUILibrary.hpp"
#include "BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSessions::AdvancedExternalUILibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AdvancedSessions.AdvancedExternalUILibrary");
    return result;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::ShowLeaderBoardUI(void* LeaderboardName, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::ShowWebURLUI(void* URLToShow, void*& Result, void*& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY) {
    return;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::ShowProfileUI(_Script_AdvancedSessions::BPUniqueNetId PlayerViewingProfile, _Script_AdvancedSessions::BPUniqueNetId PlayerToViewProfileOf, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::ShowInviteUI(_Script_Engine::PlayerController* PlayerController, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::CloseWebURLUI() {
    return;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::ShowFriendsUI(_Script_Engine::PlayerController* PlayerController, void*& Result) {
    return;
}
void _Script_AdvancedSessions::AdvancedExternalUILibrary::ShowAccountUpgradeUI(_Script_AdvancedSessions::BPUniqueNetId PlayerRequestingAccountUpgradeUI, void*& Result) {
    return;
}
