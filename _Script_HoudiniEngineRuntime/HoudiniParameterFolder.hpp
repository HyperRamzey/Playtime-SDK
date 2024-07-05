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
struct HoudiniParameterFolder : public HoudiniParameter {
    private: char pad_108[0x10]; public:
    void* get_FolderType();
    bool get_bExpanded();
    void set_bExpanded(bool value);
    bool get_bChosen();
    void set_bChosen(bool value);
    int32_t& get_ChildCounter();
    bool get_bIsContentShown();
    void set_bIsContentShown(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
