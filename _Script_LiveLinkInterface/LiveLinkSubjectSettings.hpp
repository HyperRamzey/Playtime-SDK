#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_LiveLinkInterface {
struct LiveLinkFrameInterpolationProcessor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkSubjectSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_PreProcessors();
    _Script_LiveLinkInterface::LiveLinkFrameInterpolationProcessor*& get_InterpolationProcessor();
    void* get_Translators();
    void* get_Role();
    void* get_FrameRate();
    bool get_bRebroadcastSubject();
    void set_bRebroadcastSubject(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
