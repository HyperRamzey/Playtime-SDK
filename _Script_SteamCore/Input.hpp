#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InputActionSetHandle.hpp"
#include "InputAnalogActionData.hpp"
#include "InputAnalogActionHandle.hpp"
#include "InputDigitalActionData.hpp"
#include "InputDigitalActionHandle.hpp"
#include "InputHandle.hpp"
#include "InputMotionData.hpp"
#include "SteamCoreSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Input : public SteamCoreSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void TriggerVibration(_Script_SteamCore::InputHandle Handle, void* LeftSpeed, void* RightSpeed);
    void TriggerRepeatedHapticPulse(_Script_SteamCore::InputHandle Handle, void* TargetPad, void* DurationMicroSec, void* OffMicroSec, void* Repeat, void* Flags);
    void TriggerHapticPulse(_Script_SteamCore::InputHandle Handle, void* TargetPad, void* DurationMicroSec);
    void* TranslateActionOrigin(void* DestinationInputType, void* SourceOrigin);
    void StopAnalogActionMomentum(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputAnalogActionHandle EAction);
    bool Shutdown();
    bool ShowBindingPanel(_Script_SteamCore::InputHandle Handle);
    void SetLEDColor(_Script_SteamCore::InputHandle Handle, void* ColorR, void* ColorG, void* ColorB, void* Flags);
    bool Init();
    void* GetStringForXboxOrigin(void* Origin);
    void* GetStringForActionOrigin(void* Origin);
    int32_t GetRemotePlaySessionID(_Script_SteamCore::InputHandle Handle);
    _Script_SteamCore::InputMotionData GetMotionData(_Script_SteamCore::InputHandle Handle);
    void* GetInputTypeForHandle(_Script_SteamCore::InputHandle Handle);
    void* GetGlyphForXboxOrigin(void* Origin);
    void* GetGlyphForActionOrigin(void* Origin);
    int32_t GetGamepadIndexForController(_Script_SteamCore::InputHandle Handle);
    int32_t GetDigitalActionOrigins(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetHandle, _Script_SteamCore::InputDigitalActionHandle DigitalActionHandle, void*& OriginsOut);
    _Script_SteamCore::InputDigitalActionHandle GetDigitalActionHandle(void* PszActionName);
    _Script_SteamCore::InputDigitalActionData GetDigitalActionData(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputDigitalActionHandle DigitalActionHandle);
    bool GetDeviceBindingRevision(_Script_SteamCore::InputHandle Handle, int32_t& Major, int32_t& Minor);
    _Script_SteamCore::InputActionSetHandle GetCurrentActionSet(_Script_SteamCore::InputHandle Handle);
    _Script_SteamCore::InputHandle GetControllerForGamepadIndex(int32_t Index);
    int32_t GetConnectedControllers(void*& OutHandles);
    int32_t GetAnalogActionOrigins(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetHandle, _Script_SteamCore::InputAnalogActionHandle AnalogActionHandle, void*& OriginsOut);
    _Script_SteamCore::InputAnalogActionHandle GetAnalogActionHandle(void* PszActionName);
    _Script_SteamCore::InputAnalogActionData GetAnalogActionData(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputAnalogActionHandle AnalogActionHandle);
    int32_t GetActiveActionSetLayers(_Script_SteamCore::InputHandle Handle, void*& Data);
    _Script_SteamCore::InputActionSetHandle GetActionSetHandle(void* ActionSetName);
    void* GetActionOriginFromXboxOrigin(_Script_SteamCore::InputHandle Handle, void* Origin);
    void DeactivateAllActionSetLayers(_Script_SteamCore::InputHandle Handle);
    void DeactivateActionSetLayer(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetLayerHandle);
    void ActivateActionSetLayer(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetLayerHandle);
    void ActivateActionSet(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetHandle);
}; // Size: 0x48
#pragma pack(pop)
}
