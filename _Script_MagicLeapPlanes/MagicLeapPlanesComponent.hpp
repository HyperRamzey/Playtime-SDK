#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapPlanes {
#pragma pack(push, 1)
struct MagicLeapPlanesComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x60]; public:
    void* get_QueryFlags();
    _Script_Engine::BoxComponent*& get_SearchVolume();
    int32_t& get_MaxResults();
    float& get_MinHolePerimeter();
    float& get_MinPlaneArea();
    void* get_QueryType();
    float& get_SimilarityThreshold();
    void* get_OnPlanesQueryResult();
    void* get_OnPersistentPlanesQueryResult();
    static _Script_CoreUObject::Class* static_class();
    bool RequestPlanesAsync();
}; // Size: 0x260
#pragma pack(pop)
}
