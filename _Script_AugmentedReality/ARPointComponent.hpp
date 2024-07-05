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
struct ARPointUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARPointComponent : public ARComponent {
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void ServerUpdatePayload(_Script_AugmentedReality::ARPointUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARPointUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARPointUpdatePayload& Payload);
}; // Size: 0x280
#pragma pack(pop)
}
