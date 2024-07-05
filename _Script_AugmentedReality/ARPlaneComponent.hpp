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
struct ARPlaneUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARPlaneComponent : public ARComponent {
    private: char pad_280[0x80]; public:
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void SetPlaneComponentDebugMode(void* NewDebugMode);
    void SetObjectClassificationDebugColors(void*& InColors);
    void ServerUpdatePayload(_Script_AugmentedReality::ARPlaneUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARPlaneUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARPlaneUpdatePayload& Payload);
    void* GetObjectClassificationDebugColors();
}; // Size: 0x300
#pragma pack(pop)
}
