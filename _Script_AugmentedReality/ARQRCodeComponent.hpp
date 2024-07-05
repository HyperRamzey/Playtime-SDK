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
struct ARQRCodeUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARQRCodeComponent : public ARComponent {
    private: char pad_280[0x70]; public:
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void SetQRCodeComponentDebugMode(void* NewDebugMode);
    void ServerUpdatePayload(_Script_AugmentedReality::ARQRCodeUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARQRCodeUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARQRCodeUpdatePayload& Payload);
}; // Size: 0x2f0
#pragma pack(pop)
}
