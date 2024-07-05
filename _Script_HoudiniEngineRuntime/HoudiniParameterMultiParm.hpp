#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterMultiParm : public HoudiniParameter {
    private: char pad_108[0x48]; public:
    bool get_bIsShown();
    void set_bIsShown(bool value);
    int32_t& get_Value();
    void* get_TemplateName();
    int32_t& get_MultiparmValue();
    void* get_MultiParmInstanceNum();
    void* get_MultiParmInstanceLength();
    void* get_MultiParmInstanceCount();
    void* get_InstanceStartOffset();
    void* get_MultiParmInstanceLastModifyArray();
    int32_t& get_DefaultInstanceCount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
