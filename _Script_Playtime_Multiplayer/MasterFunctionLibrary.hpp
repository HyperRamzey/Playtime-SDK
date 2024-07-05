#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Vector_NetQuantize.hpp"
#include "PresetSlot.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct MasterDataAsset;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct Monster;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_Engine {
struct SoundMix;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MasterFunctionLibrary : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    _Script_Playtime_Multiplayer::MasterDataAsset*& get_MasterDataAsset();
    static _Script_CoreUObject::Class* static_class();
    void WrapInt(int32_t Value, int32_t Min, int32_t Max, int32_t& Out);
    void SwitchLocallyControlledByPlayer(_Script_Engine::Pawn* Pawn, bool& Yes);
    void SwitchIsPlayerMonster(_Script_CoreUObject::Object* WorldContextObject, bool& Yes);
    void StringContainsProfanity(void* In, bool& Out);
    void StringArrayToNameArray(void* In, void*& Out);
    void* SortFloats(void* Floats);
    void SetUIMode(_Script_Engine::PlayerController* PlayerController, bool bShowMouse, void* UIMode);
    void SanitizeString(void* In, void*& Out);
    void RemoveWidgetIfValid(_Script_UMG::Widget* Target);
    void* PreviousMonsterType(void* Current);
    void* PreviousCharacterType(void* Current);
    bool PresetEquals(_Script_Playtime_Multiplayer::PresetSlot One, _Script_Playtime_Multiplayer::PresetSlot Two);
    void* PointToResolution(_Script_CoreUObject::IntPoint In);
    void PointsToResolutions(void* In, void*& Out);
    int32_t NtoI(void* Name);
    void* NextMonsterType(void* Current);
    void* NextCharacterType(void* Current);
    bool NearlyEqual(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Epsilon);
    void NameArrayToStringArray(void* In, void*& Out);
    void* NameArrayToIntArray(void* Names);
    float MultiplyByPiOverTwo(float In);
    void* ItoN(int32_t Name);
    void IsValidCharacters(void* String, bool& Valid);
    bool IsTooltipNeeded(_Script_CoreUObject::Object* WorldContextObject, void* TooltipKey);
    bool IsOdd(int32_t I);
    bool IsLocalPlayerMonster(_Script_CoreUObject::Object* WorldContextObject);
    bool IsLocallyControlledByPlayer(_Script_Engine::Pawn* Pawn);
    void* IntArrayToNameArray(void* Ints);
    void IndexToGridCoords(int32_t In, int32_t GridWidth, int32_t& GridRow, int32_t& GridColumn);
    _Script_Playtime_Multiplayer::Monster* GetWorldMonster(_Script_CoreUObject::Object* WorldContextObject, bool& Yes);
    _Script_Engine::World* GetTransitionLevel();
    void GetTargetArmLength(float CurrentLength, float DeltaSeconds, bool IsRunning, float& Length, bool& ShouldUpdate);
    _Script_Engine::DataTable* GetSpecifiedDataTable(void* Name);
    _Script_Engine::SoundClass* GetSoundClass(void* Name);
    void* GetSlurs();
    _Script_CoreUObject::Transform GetRandomActorTransform(void* Actors);
    void GetPlaybackTime(_Script_Engine::AudioComponent* AudioComponent, float& Time);
    int32_t GetOctant(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D Point);
    void* GetNumEditorPlayers();
    void GetNearestMultiple(float In, float MultipleOf, float& Out);
    _Script_Playtime_Multiplayer::MasterDataAsset* GetMasterDataAsset();
    void* GetGameVersion();
    _Script_Engine::SoundMix* GetDefaultSoundMixModifier();
    void GetComponentForwardTrace(_Script_Engine::SceneComponent* Target, float Distance, _Script_CoreUObject::Vector& Start, _Script_CoreUObject::Vector& End);
    void* GetCoinAmountByID(int32_t Bundle);
    void* GetCharacterName(void* Type);
    void* GetBuildDate();
    void FilterAndSortByType(void* Elements, _Script_Engine::Actor* Player);
    bool DoesMonsterExist(_Script_CoreUObject::Object* WorldContextObject);
    void* DateTimeToString(_Script_CoreUObject::DateTime In);
    void ClampClientLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector ServerLocation, _Script_Engine::Vector_NetQuantize ClientLocation, _Script_CoreUObject::Vector& ValidatedLocation, bool DoTrace, float MaxDistance);
    float AddFloats(void* Floats);
}; // Size: 0x30
#pragma pack(pop)
}
