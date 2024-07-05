#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigComponentMappedComponent {
    private: char pad_0[0x18]; public:
    _Script_Engine::SceneComponent*& get_Component();
    void* get_ElementName();
    void* get_ElementType();
    void* get_Direction();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
