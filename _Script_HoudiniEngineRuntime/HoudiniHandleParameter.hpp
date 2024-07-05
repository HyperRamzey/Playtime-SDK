#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniParameter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniHandleParameter : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    _Script_HoudiniEngineRuntime::HoudiniParameter*& get_AssetParameter();
    int32_t& get_TupleIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
