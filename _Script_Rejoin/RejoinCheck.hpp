#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Rejoin {
#pragma pack(push, 1)
struct RejoinCheck : public _Script_CoreUObject::Object {
    private: char pad_28[0x148]; public:
    void* get_LastKnownStatus();
    bool get_bRejoinAfterCheck();
    void set_bRejoinAfterCheck(bool value);
    bool get_bAttemptingRejoin();
    void set_bAttemptingRejoin(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
