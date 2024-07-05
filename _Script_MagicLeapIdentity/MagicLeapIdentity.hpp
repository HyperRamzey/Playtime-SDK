#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapIdentity {
#pragma pack(push, 1)
struct MagicLeapIdentity : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void* RequestAttributeValueAsync(void*& RequestedAttributeList, void*& ResultDelegate);
    void* RequestAttributeValue(void*& RequestedAttributeList, void*& RequestedAttributeValues);
    void GetAllAvailableAttributesAsync(void*& ResultDelegate);
    void* GetAllAvailableAttributes(void*& AvailableAttributes);
}; // Size: 0x38
#pragma pack(pop)
}
