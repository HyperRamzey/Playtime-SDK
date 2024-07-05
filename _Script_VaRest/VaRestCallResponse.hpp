#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_VaRest {
struct VaRestRequestJSON;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestCallResponse {
    private: char pad_0[0x28]; public:
    _Script_VaRest::VaRestRequestJSON*& get_Request();
    void* get_Callback();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
