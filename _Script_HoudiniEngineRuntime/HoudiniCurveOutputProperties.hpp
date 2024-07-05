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
struct HoudiniCurveOutputProperties {
    private: char pad_0[0xc]; public:
    void* get_CurveOutputType();
    int32_t& get_NumPoints();
    bool get_bClosed();
    void set_bClosed(bool value);
    void* get_CurveType();
    void* get_CurveMethod();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
