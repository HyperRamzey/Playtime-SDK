#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Qos {
#pragma pack(push, 1)
struct QosEvaluator : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    bool get_bInProgress();
    void set_bInProgress(bool value);
    bool get_bCancelOperation();
    void set_bCancelOperation(bool value);
    void* get_Datacenters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
