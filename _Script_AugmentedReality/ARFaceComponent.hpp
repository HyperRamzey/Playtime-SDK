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
struct ARFaceUpdatePayload;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARFaceComponent : public ARComponent {
    private: char pad_280[0x60]; public:
    void* get_TransformSetting();
    bool get_bUpdateVertexNormal();
    void set_bUpdateVertexNormal(bool value);
    bool get_bFaceOutOfScreen();
    void set_bFaceOutOfScreen(bool value);
    void* get_ReplicatedPayload();
    static _Script_CoreUObject::Class* static_class();
    void SetFaceComponentDebugMode(void* NewDebugMode);
    void ServerUpdatePayload(_Script_AugmentedReality::ARFaceUpdatePayload& NewPayload);
    void ReceiveUpdate(_Script_AugmentedReality::ARFaceUpdatePayload& Payload);
    void ReceiveAdd(_Script_AugmentedReality::ARFaceUpdatePayload& Payload);
}; // Size: 0x2e0
#pragma pack(pop)
}
