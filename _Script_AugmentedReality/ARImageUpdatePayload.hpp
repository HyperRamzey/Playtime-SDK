#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AugmentedReality {
struct ARCandidateImage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARImageUpdatePayload {
    private: char pad_0[0x60]; public:
    void* get_SessionPayload();
    void* get_WorldTransform();
    _Script_AugmentedReality::ARCandidateImage*& get_DetectedImage();
    void* get_EstimatedSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
