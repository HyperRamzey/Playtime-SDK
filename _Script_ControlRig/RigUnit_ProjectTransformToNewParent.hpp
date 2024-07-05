#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_ProjectTransformToNewParent : public RigUnit {
    private: char pad_8[0xa8]; public:
    void* get_Child();
    bool get_bChildInitial();
    void set_bChildInitial(bool value);
    void* get_OldParent();
    bool get_bOldParentInitial();
    void set_bOldParentInitial(bool value);
    void* get_NewParent();
    bool get_bNewParentInitial();
    void set_bNewParentInitial(bool value);
    void* get_Transform();
    void* get_CachedChild();
    void* get_CachedOldParent();
    void* get_CachedNewParent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
