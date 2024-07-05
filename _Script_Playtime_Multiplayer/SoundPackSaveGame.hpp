#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundPackEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct SurvivorSoundPack;
}
namespace _Script_Playtime_Multiplayer {
struct SoundPack;
}
namespace _Script_Playtime_Multiplayer {
struct LobbyMusicPack;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleSoundPack;
}
namespace _Script_Playtime_Multiplayer {
struct ChaseMusicPack;
}
namespace _Script_Playtime_Multiplayer {
struct AmbiencePack;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct SoundPackSaveGame : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    int32_t& get_SelectedPuzzlePackID();
    int32_t& get_SelectedSurvivorPackID();
    int32_t& get_SelectedLobbyPackID();
    int32_t& get_SelectedAmbiencePackID();
    int32_t& get_SelectedChasePackID();
    static _Script_CoreUObject::Class* static_class();
    void SetSelectedPack(void* SoundPackType, int32_t ID);
    _Script_Playtime_Multiplayer::SoundPackSaveGame* LoadSounds();
    _Script_Playtime_Multiplayer::SurvivorSoundPack* GetSurvivorPack(int32_t ID);
    _Script_Playtime_Multiplayer::SoundPackEntry GetSoundPackData(int32_t ID);
    _Script_Playtime_Multiplayer::SoundPack* GetSoundPack(int32_t ID);
    _Script_Playtime_Multiplayer::SurvivorSoundPack* GetSelectedSurvivorPack();
    int32_t GetSelectedSoundPackID(void* SoundPack);
    _Script_Playtime_Multiplayer::PuzzleSoundPack* GetSelectedPuzzlePack();
    int32_t GetSelectedPackID(void* Type);
    _Script_Playtime_Multiplayer::LobbyMusicPack* GetSelectedLobbySoundPack();
    _Script_Playtime_Multiplayer::ChaseMusicPack* GetSelectedChaseMusicPack();
    _Script_Playtime_Multiplayer::AmbiencePack* GetSelectedAmbiencePack();
    _Script_Playtime_Multiplayer::PuzzleSoundPack* GetPuzzlePack(int32_t ID);
    _Script_Playtime_Multiplayer::LobbyMusicPack* GetLobbySoundPack(int32_t ID);
    _Script_Playtime_Multiplayer::ChaseMusicPack* GetChaseMusicPack(int32_t ID);
    _Script_Playtime_Multiplayer::AmbiencePack* GetAmbiencePack(int32_t ID);
}; // Size: 0x58
#pragma pack(pop)
}
