#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterRampModificationEvent : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    bool get_bIsInsertEvent();
    void set_bIsInsertEvent(bool value);
    bool get_bIsFloatRamp();
    void set_bIsFloatRamp(bool value);
    int32_t& get_DeleteInstanceIndex();
    float& get_InsertPosition();
    float& get_InsertFloat();
    void* get_InsertColor();
    void* get_InsertInterpolation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
