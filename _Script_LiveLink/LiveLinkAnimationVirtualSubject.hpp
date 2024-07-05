#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkVirtualSubject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkAnimationVirtualSubject : public _Script_LiveLinkInterface::LiveLinkVirtualSubject {
    private: char pad_160[0x8]; public:
    bool get_bAppendSubjectNameToBones();
    void set_bAppendSubjectNameToBones(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
