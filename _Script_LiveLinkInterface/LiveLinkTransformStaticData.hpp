#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkBaseStaticData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkTransformStaticData : public LiveLinkBaseStaticData {
    private: char pad_10[0x8]; public:
    bool get_bIsLocationSupported();
    void set_bIsLocationSupported(bool value);
    bool get_bIsRotationSupported();
    void set_bIsRotationSupported(bool value);
    bool get_bIsScaleSupported();
    void set_bIsScaleSupported(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
