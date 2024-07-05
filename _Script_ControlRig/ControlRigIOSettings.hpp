#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigIOSettings {
    private: char pad_0[0x2]; public:
    bool get_bUpdatePose();
    void set_bUpdatePose(bool value);
    bool get_bUpdateCurves();
    void set_bUpdateCurves(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
