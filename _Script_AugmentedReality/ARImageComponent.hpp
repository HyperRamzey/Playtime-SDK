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
struct ARImageUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARImageComponent : public ARComponent {
    private: char pad_280[0x60]; public:
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void SetImageComponentDebugMode(void* NewDebugMode);
    void ServerUpdatePayload(_Script_AugmentedReality::ARImageUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARImageUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARImageUpdatePayload& Payload);
}; // Size: 0x2e0
#pragma pack(pop)
}
