#include "..\FUObjectArray.hpp"
#include "BP_MultiplayerPlayerController_C.hpp"
#include "..\_Game_Interface_Chat_UI_Chat\UI_Chat_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_SurvivorHUD\UI_SurvivorHUD_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_PauseMenu\UI_PauseMenu_C.hpp"
#include "..\_Game_Interface_Lobby_UI_WalkableLobby\UI_WalkableLobby_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_MonsterHUD\UI_MonsterHUD_C.hpp"
#include "..\_Game_Interface_UI_AskToBeMonster\UI_AskToBeMonster_C.hpp"
#include "..\_Game_Interface_UI_LoadingScreen\UI_LoadingScreen_C.hpp"
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_AudioCapture\AudioCaptureComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerController.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerState.hpp"
#include "..\_Script_Playtime_Multiplayer\QueueData.hpp"
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::RemoveLoadingScreen() {
    return;
}
_Game_Interface_Chat_UI_Chat::UI_Chat_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_Chat() {
    return *(_Game_Interface_Chat_UI_Chat::UI_Chat_C**)((uintptr_t)this + 0x598);
}
void* _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x570);
}
_Script_AudioCapture::AudioCaptureComponent*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_AudioCapture() {
    return *(_Script_AudioCapture::AudioCaptureComponent**)((uintptr_t)this + 0x578);
}
bool _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_ShouldStillLookForLobby() {
    return (*(uint8_t*)((uintptr_t)this + 0x590 + 0)) & 1 != 0;
}
_Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_W_PauseMenu() {
    return *(_Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C**)((uintptr_t)this + 0x5a0);
}
void* _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_MapNameToLobbyReference() {
    return (void*)((uintptr_t)this + 0x5c8);
}
_Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_Crosshair() {
    return *(_Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C**)((uintptr_t)this + 0x580);
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::NetSpawnMonster(void* ClassToSpawn, _Script_Engine::PlayerController* Player) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::ExecuteUbergraph_BP_MultiplayerPlayerController(int32_t EntryPoint) {
    return;
}
_Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_LobbyUI() {
    return *(_Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C**)((uintptr_t)this + 0x588);
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::set_ShouldStillLookForLobby(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x590 + 0);
    *(uint8_t*)((uintptr_t)this + 0x590 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_LoadingScreen() {
    return *(_Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C**)((uintptr_t)this + 0x5a8);
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::BeginPlay_VoiceChat() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::CreateLoadingScreen() {
    return;
}
_Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_W_AskToBeMonster() {
    return *(_Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C**)((uintptr_t)this + 0x5b0);
}
_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_MonsterHUD() {
    return *(_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C**)((uintptr_t)this + 0x5b8);
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::SendAudioData(void*& CompressedBuffer) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Success() {
    return;
}
int32_t& _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_SampleRate() {
    return *(int32_t*)((uintptr_t)this + 0x5c0);
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::CreateCrosshairWidget(void* ToySelection) {
    return;
}
bool _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_IsScoreboardOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c4 + 0)) & 1 != 0;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::set_IsScoreboardOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::get_MakingPreset() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c5 + 0)) & 1 != 0;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Owner_RequestQueueData() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::set_MakingPreset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/BP_MultiplayerPlayerController.BP_MultiplayerPlayerController_C");
    return result;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::InLobby_(bool& Value) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::SpawnAndPossess(void* Class, _Script_Engine::PlayerController* Player, void* SpawnTag) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::InpActEvt_B_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::InpActEvt_Pause_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Fail(void* ErrorMessage) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Client_EndGame(void* MatchID) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::CreateChatWidget() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::SetSessionName(void* SessionName) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::CreateMonsterWidget() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::NetAddVelocityToGrabbedActor(_Script_Engine::StaticMeshComponent* StaticMesh, _Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Owner_ApplySettings() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Client_DisplayMigrationScreen(void* LoadingMessage) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Client_RemoveAllWidgets() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::BeginPlay_Widgets() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::HideMigrationWidget() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::StartGameAnim() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::SetUIMode() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Owner_UnloadLobby() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::ReceiveBeginPlay() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::SetupLobby() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Server_No() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::ClearLobbyUI() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::No() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::DestroyLobbyUI() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Client_ReadyToStart() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Client_ResetHostMigration() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::OnUnpause() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Server_ReadyToStart(void* ID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* Controller) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::DeliverMessage(void* Comm, void* Location, _Script_AdvancedSessions::BPUniqueNetId SenderID, _Script_Playtime_Multiplayer::PlaytimePlayerState* Sending_Player) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::ReceiveMessage(void* Comm, void* Location, _Script_AdvancedSessions::BPUniqueNetId SenderID, _Script_Playtime_Multiplayer::PlaytimePlayerState* Sending_Player) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::SendMessage(void* Comm, void* Location) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::ReceivePossess(_Script_Engine::Pawn* PossessedPawn) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Server_Yes(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* PlayerController) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Yes() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Remove_AskToBeMonster() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Create_AskToBeMonster() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Tick_VoiceChat() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C::Server_RecieveQueueData(int32_t PlayerID, _Script_Playtime_Multiplayer::QueueData Data) {
    return;
}
