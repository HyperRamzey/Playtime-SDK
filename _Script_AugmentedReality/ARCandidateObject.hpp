#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARCandidateObject : public _Script_Engine::DataAsset {
    private: char pad_30[0x40]; public:
    void* get_CandidateObjectData();
    void* get_FriendlyName();
    void* get_BoundingBox();
    static _Script_CoreUObject::Class* static_class();
    void SetFriendlyName(void* NewName);
    void SetCandidateObjectData(void*& InCandidateObject);
    void SetBoundingBox(_Script_CoreUObject::Box& InBoundingBox);
    void* GetFriendlyName();
    void* GetCandidateObjectData();
    _Script_CoreUObject::Box GetBoundingBox();
}; // Size: 0x70
#pragma pack(pop)
}
