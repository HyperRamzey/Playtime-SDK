#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMessageBusFramework {
#pragma pack(push, 1)
struct LiveLinkSubjectFrameMessage {
    private: char pad_0[0x90]; public:
    void* get_SubjectName();
    void* get_Transforms();
    void* get_Curves();
    void* get_MetaData();
    double& get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
