#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaIOCore {
struct MediaCapture;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct MediaOutput : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    int32_t& get_NumberOfTextureBuffers();
    static _Script_CoreUObject::Class* static_class();
    bool Validate(void*& OutFailureReason);
    _Script_MediaIOCore::MediaCapture* CreateMediaCapture();
}; // Size: 0x30
#pragma pack(pop)
}
