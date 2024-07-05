#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_TimeManagement\TimeSynchronizationSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkTimeSynchronizationSource : public _Script_TimeManagement::TimeSynchronizationSource {
    private: char pad_30[0x50]; public:
    void* get_SubjectName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
