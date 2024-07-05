#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Input.hpp"
#include "InputActionSetHandle.hpp"
#include "InputAnalogActionData.hpp"
#include "InputAnalogActionHandle.hpp"
#include "InputDigitalActionData.hpp"
#include "InputDigitalActionHandle.hpp"
#include "InputHandle.hpp"
#include "InputMotionData.hpp"
#include "SteamCoreSubsystem.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::Input::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Input");
    return result;
}
void _Script_SteamCore::Input::ActivateActionSetLayer(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetLayerHandle) {
    return;
}
void _Script_SteamCore::Input::TriggerVibration(_Script_SteamCore::InputHandle Handle, void* LeftSpeed, void* RightSpeed) {
    return;
}
void _Script_SteamCore::Input::ActivateActionSet(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetHandle) {
    return;
}
bool _Script_SteamCore::Input::ShowBindingPanel(_Script_SteamCore::InputHandle Handle) {
    return;
}
void _Script_SteamCore::Input::TriggerRepeatedHapticPulse(_Script_SteamCore::InputHandle Handle, void* TargetPad, void* DurationMicroSec, void* OffMicroSec, void* Repeat, void* Flags) {
    return;
}
void _Script_SteamCore::Input::TriggerHapticPulse(_Script_SteamCore::InputHandle Handle, void* TargetPad, void* DurationMicroSec) {
    return;
}
void* _Script_SteamCore::Input::TranslateActionOrigin(void* DestinationInputType, void* SourceOrigin) {
    return;
}
void _Script_SteamCore::Input::StopAnalogActionMomentum(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputAnalogActionHandle EAction) {
    return;
}
bool _Script_SteamCore::Input::Shutdown() {
    return;
}
void _Script_SteamCore::Input::SetLEDColor(_Script_SteamCore::InputHandle Handle, void* ColorR, void* ColorG, void* ColorB, void* Flags) {
    return;
}
void _Script_SteamCore::Input::DeactivateAllActionSetLayers(_Script_SteamCore::InputHandle Handle) {
    return;
}
bool _Script_SteamCore::Input::Init() {
    return;
}
void* _Script_SteamCore::Input::GetStringForXboxOrigin(void* Origin) {
    return;
}
void* _Script_SteamCore::Input::GetStringForActionOrigin(void* Origin) {
    return;
}
void* _Script_SteamCore::Input::GetActionOriginFromXboxOrigin(_Script_SteamCore::InputHandle Handle, void* Origin) {
    return;
}
int32_t _Script_SteamCore::Input::GetRemotePlaySessionID(_Script_SteamCore::InputHandle Handle) {
    return;
}
_Script_SteamCore::InputMotionData _Script_SteamCore::Input::GetMotionData(_Script_SteamCore::InputHandle Handle) {
    return;
}
void* _Script_SteamCore::Input::GetInputTypeForHandle(_Script_SteamCore::InputHandle Handle) {
    return;
}
void* _Script_SteamCore::Input::GetGlyphForXboxOrigin(void* Origin) {
    return;
}
void* _Script_SteamCore::Input::GetGlyphForActionOrigin(void* Origin) {
    return;
}
int32_t _Script_SteamCore::Input::GetGamepadIndexForController(_Script_SteamCore::InputHandle Handle) {
    return;
}
int32_t _Script_SteamCore::Input::GetDigitalActionOrigins(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetHandle, _Script_SteamCore::InputDigitalActionHandle DigitalActionHandle, void*& OriginsOut) {
    return;
}
_Script_SteamCore::InputDigitalActionHandle _Script_SteamCore::Input::GetDigitalActionHandle(void* PszActionName) {
    return;
}
_Script_SteamCore::InputDigitalActionData _Script_SteamCore::Input::GetDigitalActionData(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputDigitalActionHandle DigitalActionHandle) {
    return;
}
bool _Script_SteamCore::Input::GetDeviceBindingRevision(_Script_SteamCore::InputHandle Handle, int32_t& Major, int32_t& Minor) {
    return;
}
_Script_SteamCore::InputActionSetHandle _Script_SteamCore::Input::GetCurrentActionSet(_Script_SteamCore::InputHandle Handle) {
    return;
}
_Script_SteamCore::InputHandle _Script_SteamCore::Input::GetControllerForGamepadIndex(int32_t Index) {
    return;
}
int32_t _Script_SteamCore::Input::GetConnectedControllers(void*& OutHandles) {
    return;
}
int32_t _Script_SteamCore::Input::GetAnalogActionOrigins(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetHandle, _Script_SteamCore::InputAnalogActionHandle AnalogActionHandle, void*& OriginsOut) {
    return;
}
_Script_SteamCore::InputAnalogActionHandle _Script_SteamCore::Input::GetAnalogActionHandle(void* PszActionName) {
    return;
}
_Script_SteamCore::InputAnalogActionData _Script_SteamCore::Input::GetAnalogActionData(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputAnalogActionHandle AnalogActionHandle) {
    return;
}
int32_t _Script_SteamCore::Input::GetActiveActionSetLayers(_Script_SteamCore::InputHandle Handle, void*& Data) {
    return;
}
_Script_SteamCore::InputActionSetHandle _Script_SteamCore::Input::GetActionSetHandle(void* ActionSetName) {
    return;
}
void _Script_SteamCore::Input::DeactivateActionSetLayer(_Script_SteamCore::InputHandle Handle, _Script_SteamCore::InputActionSetHandle ActionSetLayerHandle) {
    return;
}
