#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerController\BP_MultiplayerPlayerController_C.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "..\_Game_Base_MultiplayerGameInstance\MultiplayerGameInstance_C.hpp"
#include "PlaytimeFunctionLibrary_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Playtime_Multiplayer\LevelStruct.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeEvent.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
#include "..\_Script_SteamCore\SteamID.hpp"
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::LeaveLobby(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::ResetLobbyData(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Script_CoreUObject::Class* _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C");
    return result;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetOutfits(_Script_CoreUObject::Object* __WorldContext, void*& Outfits) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Sort_String_Array(void*& ArrayIn, bool AscendingSortOrder, _Script_CoreUObject::Object* __WorldContext, void*& ArraySorted) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetRandomLevel(_Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::LevelStruct& Level) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetAllPlayerStates(_Script_CoreUObject::Object* __WorldContext, void*& PlayerStates) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetAllPlayerControllers(_Script_CoreUObject::Object* __WorldContext, void*& PlayerController) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetSpecialists(void* Filter, _Script_CoreUObject::Object* __WorldContext, void*& PlayerStates) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Get_PlayableLevels(_Script_CoreUObject::Object* __WorldContext, void*& Levels) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::SetLobbyState(void* State, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::RequestLeaveLobby(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetKeyBinds(void* InputAction1, void* InputAction2, _Script_CoreUObject::Object* __WorldContext, void*& AbilityKey1, void*& AbilityKey2) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::IsLobbyHost(_Script_CoreUObject::Object* __WorldContext, bool& Valid) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetLobby(_Script_CoreUObject::Object* __WorldContext, _Script_SteamCore::SteamID& Lobby, bool& Valid) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::FindToyByBoolArray(void*& ToysFound, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Remove_Localization(void* Value, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value) {
    return;
}
bool _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::CreateRewardsWidget(void*& Items, _Script_CoreUObject::Object* Sender, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::HideAllNametags(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Text_To_Capitalize_Case(void* Text, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value) {
    return;
}
void* _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetPlayerStartsByTag(void* PlayerStartTag, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Is_Host(_Script_CoreUObject::Object* __WorldContext, bool& Host_) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetEventInfo(_Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PlaytimeEvent& EventInfo, bool& IsEventActive) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::SaveCosmeticPresetStructToCharacter(void* Character, _Script_Playtime_Multiplayer::PresetSlot Preset, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::RefreshTicketCountDisplay(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetCharacterDescriptions(void* CurrentChar, _Script_CoreUObject::Object* __WorldContext, void*& Description) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Enough_Space_for_Jumpscare(void* Monster_Type, _Script_Engine::Character* Monster_Character, float Distance_From_Monster, _Script_CoreUObject::Object* __WorldContext, bool& Return_Value) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetStoredSessionName(_Script_CoreUObject::Object* __WorldContext, void*& SessionName, bool& Valid) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::CosmeticBelongsToToECharacterType(void* In, _Script_CoreUObject::Object* __WorldContext, void*& Out) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::ECharacterTypeToCosmeticBelongsTo(void* In, _Script_CoreUObject::Object* __WorldContext, void*& Out) {
    return;
}
void* _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::LoadTapes(_Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::DateTime& FirstTapeDate) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::SaveTapes(int32_t& NewTapeID, _Script_CoreUObject::DateTime TapeDate, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::DisplayMessage(void* Message, bool Error, _Script_CoreUObject::Object* From, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
bool _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetMultiplayerPlayerState(_Script_CoreUObject::Object* __WorldContext, _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& MultiplayerPlayerState) {
    return;
}
void _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::ChangeObjective(void* NewObjective, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C* _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetMultiplayerGameInstance(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
_Script_Engine::Character* _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::Get_World_Monster_Unsafe(_Script_CoreUObject::Object* worldcntxt, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
bool _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetMultiplayerController(_Script_CoreUObject::Object* __WorldContext, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& MultiplayerController) {
    return;
}
bool _Game_Base_PlaytimeFunctionLibrary::PlaytimeFunctionLibrary_C::GetMultiplayerCharacter(_Script_CoreUObject::Object* __WorldContext, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& PlayerReference) {
    return;
}
