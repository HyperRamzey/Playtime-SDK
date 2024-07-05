#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapARPinFunctionLibrary.hpp"
#include "MagicLeapARPinQuery.hpp"
#include "MagicLeapARPinState.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary");
    return result;
}
void _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(void*& Delegate) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::QueryARPins(_Script_MagicLeapARPin::MagicLeapARPinQuery& Query, void*& Pins) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(_Script_MagicLeapARPin::MagicLeapARPinQuery& InGlobalFilter) {
    return;
}
void _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(void*& Delegate) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::ParseStringToARPinId(void* PinIdString, _Script_CoreUObject::Guid& ARPinId) {
    return;
}
void _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int32_t UserIndex) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::IsTrackerValid() {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int32_t& Count) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(_Script_MagicLeapARPin::MagicLeapARPinQuery& CurrentGlobalFilter) {
    return;
}
int32_t _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex() {
    return;
}
void _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(void*& Delegate) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetClosestARPin(_Script_CoreUObject::Vector& SearchPoint, _Script_CoreUObject::Guid& PinId) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetAvailableARPins(int32_t NumRequested, void*& Pins) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetARPinStateToString(_Script_MagicLeapARPin::MagicLeapARPinState& State) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetARPinState(_Script_CoreUObject::Guid& PinId, _Script_MagicLeapARPin::MagicLeapARPinState& State) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(_Script_CoreUObject::Guid& PinId, _Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, bool& PinFoundInEnvironment) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(_Script_CoreUObject::Guid& PinId, _Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, bool& PinFoundInEnvironment) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::DestroyTracker() {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::CreateTracker() {
    return;
}
void _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(void*& Delegate) {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinFunctionLibrary::ARPinIdToString(_Script_CoreUObject::Guid& ARPinId) {
    return;
}
