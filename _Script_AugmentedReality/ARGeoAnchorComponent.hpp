#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARGeoAnchorUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARGeoAnchorComponent : public ARComponent {
    private: char pad_280[0x70]; public:
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void SetGeoAnchorComponentDebugMode(void* NewDebugMode);
    void ServerUpdatePayload(_Script_AugmentedReality::ARGeoAnchorUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARGeoAnchorUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARGeoAnchorUpdatePayload& Payload);
}; // Size: 0x2f0
#pragma pack(pop)
}
