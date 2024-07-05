#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkSourceDebugInfo {
    private: char pad_0[0x10]; public:
    void* get_SubjectName();
    int32_t& get_SnapshotIndex();
    int32_t& get_NumberOfBufferAtSnapshot();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
