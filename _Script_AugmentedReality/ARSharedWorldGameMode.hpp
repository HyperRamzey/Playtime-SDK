#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameMode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARSharedWorldGameState;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSharedWorldGameMode : public _Script_Engine::GameMode {
    private: char pad_308[0x68]; public:
    int32_t& get_BufferSizePerChunk();
    static _Script_CoreUObject::Class* static_class();
    void SetPreviewImageData(void* ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(void* ARWorldData);
    _Script_AugmentedReality::ARSharedWorldGameState* GetARSharedWorldGameState();
}; // Size: 0x370
#pragma pack(pop)
}
