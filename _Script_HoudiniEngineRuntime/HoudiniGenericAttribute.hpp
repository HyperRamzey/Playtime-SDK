#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniGenericAttribute {
    private: char pad_0[0x50]; public:
    void* get_AttributeName();
    void* get_AttributeType();
    void* get_AttributeOwner();
    int32_t& get_AttributeCount();
    int32_t& get_AttributeTupleSize();
    void* get_DoubleValues();
    void* get_IntValues();
    void* get_StringValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
