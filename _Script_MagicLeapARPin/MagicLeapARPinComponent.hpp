#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_MagicLeapARPin {
struct MagicLeapARPinState;
}
namespace _Script_MagicLeapARPin {
struct MagicLeapARPinSaveGame;
}
namespace _Script_CoreUObject {
struct Guid;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_MagicLeapARPin {
#pragma pack(push, 1)
struct MagicLeapARPinComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x1b0]; public:
    void* get_ObjectUID();
    int32_t& get_UserIndex();
    void* get_AutoPinType();
    bool get_bShouldPinActor();
    void set_bShouldPinActor(bool value);
    void* get_PinDataClass();
    void* get_SearchPinTypes();
    _Script_Engine::SphereComponent*& get_SearchVolume();
    void* get_OnPersistentEntityPinned();
    void* get_OnPersistentEntityPinLost();
    void* get_OnPinDataLoadAttemptCompleted();
    void* get_PinnedCFUID();
    _Script_Engine::SceneComponent*& get_PinnedSceneComponent();
    _Script_MagicLeapARPin::MagicLeapARPinSaveGame*& get_PinData();
    static _Script_CoreUObject::Class* static_class();
    void UnPin();
    _Script_MagicLeapARPin::MagicLeapARPinSaveGame* TryGetPinData(void* InPinDataClass, bool& OutPinDataValid);
    bool PinToRestoredOrSyncedID();
    bool PinToID(_Script_CoreUObject::Guid& PinId);
    void PinToBestFit();
    bool PinSceneComponent(_Script_Engine::SceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(_Script_Engine::Actor* ActorToPin);
    bool IsPinned();
    bool GetPinState(_Script_MagicLeapARPin::MagicLeapARPinState& State);
    bool GetPinnedPinID(_Script_CoreUObject::Guid& PinId);
    _Script_MagicLeapARPin::MagicLeapARPinSaveGame* GetPinData(void* PinDataClass);
    void AttemptPinDataRestorationAsync();
    bool AttemptPinDataRestoration();
}; // Size: 0x3b0
#pragma pack(pop)
}
