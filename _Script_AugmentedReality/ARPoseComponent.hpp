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
struct ARPoseUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARPoseComponent : public ARComponent {
    private: char pad_280[0x40]; public:
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void SetPoseComponentDebugMode(void* NewDebugMode);
    void ServerUpdatePayload(_Script_AugmentedReality::ARPoseUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARPoseUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARPoseUpdatePayload& Payload);
}; // Size: 0x2c0
#pragma pack(pop)
}
