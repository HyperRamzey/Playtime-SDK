#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkControllerBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkComponents {
#pragma pack(push, 1)
struct LiveLinkTransformController : public LiveLinkControllerBase {
    private: char pad_40[0x8]; public:
    void* get_TransformData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
