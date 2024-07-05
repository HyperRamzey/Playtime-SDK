#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MediaOutput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct FileMediaOutput : public MediaOutput {
    private: char pad_30[0xa0]; public:
    void* get_WriteOptions();
    void* get_FilePath();
    void* get_BaseFileName();
    bool get_bOverrideDesiredSize();
    void set_bOverrideDesiredSize(bool value);
    void* get_DesiredSize();
    bool get_bOverridePixelFormat();
    void set_bOverridePixelFormat(bool value);
    void* get_DesiredPixelFormat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
