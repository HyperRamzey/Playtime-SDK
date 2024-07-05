#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapARPin {
struct MagicLeapARPinQuery;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Guid;
}
namespace _Script_MagicLeapARPin {
struct MagicLeapARPinState;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UnBindToOnMagicLeapContentBindingFoundDelegate(void*& Delegate);
    void UnBindToOnMagicLeapARPinUpdatedDelegate(void*& Delegate);
    void* SetGlobalQueryFilter(_Script_MagicLeapARPin::MagicLeapARPinQuery& InGlobalFilter);
    void SetContentBindingSaveGameUserIndex(int32_t UserIndex);
    void* QueryARPins(_Script_MagicLeapARPin::MagicLeapARPinQuery& Query, void*& Pins);
    bool ParseStringToARPinId(void* PinIdString, _Script_CoreUObject::Guid& ARPinId);
    bool IsTrackerValid();
    void* GetNumAvailableARPins(int32_t& Count);
    void* GetGlobalQueryFilter(_Script_MagicLeapARPin::MagicLeapARPinQuery& CurrentGlobalFilter);
    int32_t GetContentBindingSaveGameUserIndex();
    void* GetClosestARPin(_Script_CoreUObject::Vector& SearchPoint, _Script_CoreUObject::Guid& PinId);
    void* GetAvailableARPins(int32_t NumRequested, void*& Pins);
    void* GetARPinStateToString(_Script_MagicLeapARPin::MagicLeapARPinState& State);
    void* GetARPinState(_Script_CoreUObject::Guid& PinId, _Script_MagicLeapARPin::MagicLeapARPinState& State);
    bool GetARPinPositionAndOrientation_TrackingSpace(_Script_CoreUObject::Guid& PinId, _Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, bool& PinFoundInEnvironment);
    bool GetARPinPositionAndOrientation(_Script_CoreUObject::Guid& PinId, _Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, bool& PinFoundInEnvironment);
    void* DestroyTracker();
    void* CreateTracker();
    void BindToOnMagicLeapContentBindingFoundDelegate(void*& Delegate);
    void BindToOnMagicLeapARPinUpdatedDelegate(void*& Delegate);
    void* ARPinIdToString(_Script_CoreUObject::Guid& ARPinId);
}; // Size: 0x28
#pragma pack(pop)
}
