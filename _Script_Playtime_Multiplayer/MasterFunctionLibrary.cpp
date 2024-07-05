#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SoundClass.hpp"
#include "..\_Script_Engine\SoundMix.hpp"
#include "..\_Script_Engine\Vector_NetQuantize.hpp"
#include "..\_Script_Engine\World.hpp"
#include "MasterDataAsset.hpp"
#include "MasterFunctionLibrary.hpp"
#include "Monster.hpp"
#include "PresetSlot.hpp"
#include "..\_Script_UMG\Widget.hpp"
_Script_Playtime_Multiplayer::MasterDataAsset*& _Script_Playtime_Multiplayer::MasterFunctionLibrary::get_MasterDataAsset() {
    return *(_Script_Playtime_Multiplayer::MasterDataAsset**)((uintptr_t)this + 0x28);
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::StringContainsProfanity(void* In, bool& Out) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MasterFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MasterFunctionLibrary");
    return result;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetComponentForwardTrace(_Script_Engine::SceneComponent* Target, float Distance, _Script_CoreUObject::Vector& Start, _Script_CoreUObject::Vector& End) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::WrapInt(int32_t Value, int32_t Min, int32_t Max, int32_t& Out) {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::DoesMonsterExist(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::SortFloats(void* Floats) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::SwitchIsPlayerMonster(_Script_CoreUObject::Object* WorldContextObject, bool& Yes) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::SwitchLocallyControlledByPlayer(_Script_Engine::Pawn* Pawn, bool& Yes) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::StringArrayToNameArray(void* In, void*& Out) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::SetUIMode(_Script_Engine::PlayerController* PlayerController, bool bShowMouse, void* UIMode) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::SanitizeString(void* In, void*& Out) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::RemoveWidgetIfValid(_Script_UMG::Widget* Target) {
    return;
}
_Script_Engine::SoundClass* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetSoundClass(void* Name) {
    return;
}
_Script_Engine::DataTable* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetSpecifiedDataTable(void* Name) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::PreviousMonsterType(void* Current) {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::IsTooltipNeeded(_Script_CoreUObject::Object* WorldContextObject, void* TooltipKey) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::PreviousCharacterType(void* Current) {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::PresetEquals(_Script_Playtime_Multiplayer::PresetSlot One, _Script_Playtime_Multiplayer::PresetSlot Two) {
    return;
}
float _Script_Playtime_Multiplayer::MasterFunctionLibrary::AddFloats(void* Floats) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::PointToResolution(_Script_CoreUObject::IntPoint In) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::PointsToResolutions(void* In, void*& Out) {
    return;
}
int32_t _Script_Playtime_Multiplayer::MasterFunctionLibrary::NtoI(void* Name) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::NextMonsterType(void* Current) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::NextCharacterType(void* Current) {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::NearlyEqual(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Epsilon) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetCharacterName(void* Type) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::IntArrayToNameArray(void* Ints) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::NameArrayToStringArray(void* In, void*& Out) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::NameArrayToIntArray(void* Names) {
    return;
}
float _Script_Playtime_Multiplayer::MasterFunctionLibrary::MultiplyByPiOverTwo(float In) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::ClampClientLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector ServerLocation, _Script_Engine::Vector_NetQuantize ClientLocation, _Script_CoreUObject::Vector& ValidatedLocation, bool DoTrace, float MaxDistance) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::ItoN(int32_t Name) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::IsValidCharacters(void* String, bool& Valid) {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::IsOdd(int32_t I) {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::IsLocalPlayerMonster(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Playtime_Multiplayer::MasterDataAsset* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetMasterDataAsset() {
    return;
}
bool _Script_Playtime_Multiplayer::MasterFunctionLibrary::IsLocallyControlledByPlayer(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::IndexToGridCoords(int32_t In, int32_t GridWidth, int32_t& GridRow, int32_t& GridColumn) {
    return;
}
_Script_Playtime_Multiplayer::Monster* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetWorldMonster(_Script_CoreUObject::Object* WorldContextObject, bool& Yes) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetCoinAmountByID(int32_t Bundle) {
    return;
}
_Script_Engine::World* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetTransitionLevel() {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetTargetArmLength(float CurrentLength, float DeltaSeconds, bool IsRunning, float& Length, bool& ShouldUpdate) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetSlurs() {
    return;
}
_Script_CoreUObject::Transform _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetRandomActorTransform(void* Actors) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetPlaybackTime(_Script_Engine::AudioComponent* AudioComponent, float& Time) {
    return;
}
int32_t _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetOctant(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D Point) {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetNumEditorPlayers() {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::FilterAndSortByType(void* Elements, _Script_Engine::Actor* Player) {
    return;
}
void _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetNearestMultiple(float In, float MultipleOf, float& Out) {
    return;
}
_Script_Engine::SoundMix* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetDefaultSoundMixModifier() {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetGameVersion() {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::GetBuildDate() {
    return;
}
void* _Script_Playtime_Multiplayer::MasterFunctionLibrary::DateTimeToString(_Script_CoreUObject::DateTime In) {
    return;
}
