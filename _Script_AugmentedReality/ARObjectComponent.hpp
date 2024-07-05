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
struct ARObjectUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARObjectComponent : public ARComponent {
    private: char pad_280[0x30]; public:
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void ServerUpdatePayload(_Script_AugmentedReality::ARObjectUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARObjectUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARObjectUpdatePayload& Payload);
}; // Size: 0x2b0
#pragma pack(pop)
}
