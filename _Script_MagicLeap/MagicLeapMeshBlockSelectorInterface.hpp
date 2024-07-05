#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
struct MagicLeapTrackingMeshInfo;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapMeshBlockSelectorInterface : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SelectMeshBlocks(_Script_MagicLeap::MagicLeapTrackingMeshInfo& NewMeshInfo, void*& RequestedMesh);
}; // Size: 0x28
#pragma pack(pop)
}
