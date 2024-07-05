#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSharedWorldPlayerController : public _Script_Engine::PlayerController {
    private: char pad_570[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32_t Offset, void*& Buffer);
    void ClientUpdateARWorldData(int32_t Offset, void*& Buffer);
    void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
}; // Size: 0x578
#pragma pack(pop)
}
