#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
struct VaRestJsonObject;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestJsonValue : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void Reset();
    bool IsNull();
    void* GetTypeString();
    void* GetType();
    void* AsString();
    _Script_VaRest::VaRestJsonObject* AsObject();
    float AsNumber();
    void* AsInt64();
    int32_t AsInt32();
    bool AsBool();
    void* AsArray();
}; // Size: 0x38
#pragma pack(pop)
}
