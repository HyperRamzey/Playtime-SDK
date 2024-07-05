#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
namespace _Script_SteamCore {
struct SteamID;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimeEvent;
}
namespace _Script_Playtime_Multiplayer {
struct LevelStruct;
}
namespace _Script_Engine {
struct Character;
}
namespace _Game_Base_MultiplayerGameInstance {
struct MultiplayerGameInstance_C;
}
namespace _Game_Base_BP_MultiplayerPlayerController {
struct BP_MultiplayerPlayerController_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Base_PlaytimeFunctionLibrary {
#pragma pack(push, 1)
struct PlaytimeFunctionLibrary_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetOutfits(_Script_CoreUObject::Object* __WorldContext, void*& Outfits);
    void Sort_String_Array(void*& ArrayIn, bool AscendingSortOrder, _Script_CoreUObject::Object* __WorldContext, void*& ArraySorted);
    void GetRandomLevel(_Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::LevelStruct& Level);
    void GetAllPlayerControllers(_Script_CoreUObject::Object* __WorldContext, void*& PlayerController);
    void GetAllPlayerStates(_Script_CoreUObject::Object* __WorldContext, void*& PlayerStates);
    void GetSpecialists(void* Filter, _Script_CoreUObject::Object* __WorldContext, void*& PlayerStates);
    void ResetLobbyData(_Script_CoreUObject::Object* __WorldContext);
    void Get_PlayableLevels(_Script_CoreUObject::Object* __WorldContext, void*& Levels);
    void SetLobbyState(void* State, _Script_CoreUObject::Object* __WorldContext);
    void LeaveLobby(_Script_CoreUObject::Object* __WorldContext);
    void RequestLeaveLobby(_Script_CoreUObject::Object* __WorldContext);
    void IsLobbyHost(_Script_CoreUObject::Object* __WorldContext, bool& Valid);
    void GetLobby(_Script_CoreUObject::Object* __WorldContext, _Script_SteamCore::SteamID& Lobby, bool& Valid);
    void Remove_Localization(void* Value, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value);
    bool CreateRewardsWidget(void*& Items, _Script_CoreUObject::Object* Sender, _Script_CoreUObject::Object* __WorldContext);
    void HideAllNametags(_Script_CoreUObject::Object* __WorldContext);
    void Text_To_Capitalize_Case(void* Text, _Script_CoreUObject::Object* __WorldContext, void*& Return_Value);
    void Is_Host(_Script_CoreUObject::Object* __WorldContext, bool& Host_);
    void GetEventInfo(_Script_CoreUObject::Object* __WorldContext, _Script_Playtime_Multiplayer::PlaytimeEvent& EventInfo, bool& IsEventActive);
    void SaveCosmeticPresetStructToCharacter(void* Character, _Script_Playtime_Multiplayer::PresetSlot Preset, _Script_CoreUObject::Object* __WorldContext);
    void RefreshTicketCountDisplay(_Script_CoreUObject::Object* __WorldContext);
    void GetCharacterDescriptions(void* CurrentChar, _Script_CoreUObject::Object* __WorldContext, void*& Description);
    void GetKeyBinds(void* InputAction1, void* InputAction2, _Script_CoreUObject::Object* __WorldContext, void*& AbilityKey1, void*& AbilityKey2);
    void Enough_Space_for_Jumpscare(void* Monster_Type, _Script_Engine::Character* Monster_Character, float Distance_From_Monster, _Script_CoreUObject::Object* __WorldContext, bool& Return_Value);
    void GetStoredSessionName(_Script_CoreUObject::Object* __WorldContext, void*& SessionName, bool& Valid);
    void CosmeticBelongsToToECharacterType(void* In, _Script_CoreUObject::Object* __WorldContext, void*& Out);
    void ECharacterTypeToCosmeticBelongsTo(void* In, _Script_CoreUObject::Object* __WorldContext, void*& Out);
    void* LoadTapes(_Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::DateTime& FirstTapeDate);
    void SaveTapes(int32_t& NewTapeID, _Script_CoreUObject::DateTime TapeDate, _Script_CoreUObject::Object* __WorldContext);
    void DisplayMessage(void* Message, bool Error, _Script_CoreUObject::Object* From, _Script_CoreUObject::Object* __WorldContext);
    bool GetMultiplayerPlayerState(_Script_CoreUObject::Object* __WorldContext, _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& MultiplayerPlayerState);
    void FindToyByBoolArray(void*& ToysFound, _Script_CoreUObject::Object* __WorldContext);
    void ChangeObjective(void* NewObjective, _Script_CoreUObject::Object* __WorldContext);
    void* GetPlayerStartsByTag(void* PlayerStartTag, _Script_CoreUObject::Object* __WorldContext);
    _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C* GetMultiplayerGameInstance(_Script_CoreUObject::Object* __WorldContext);
    _Script_Engine::Character* Get_World_Monster_Unsafe(_Script_CoreUObject::Object* worldcntxt, _Script_CoreUObject::Object* __WorldContext);
    bool GetMultiplayerController(_Script_CoreUObject::Object* __WorldContext, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& MultiplayerController);
    bool GetMultiplayerCharacter(_Script_CoreUObject::Object* __WorldContext, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& PlayerReference);
}; // Size: 0x28
#pragma pack(pop)
}
