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
struct ControlRigComponentMappedElement {
    private: char pad_0[0xa0]; public:
    void* get_ComponentReference();
    int32_t& get_TransformIndex();
    void* get_TransformName();
    void* get_ElementType();
    void* get_ElementName();
    void* get_Direction();
    void* get_Offset();
    float& get_Weight();
    void* get_Space();
    _Script_Engine::SceneComponent*& get_SceneComponent();
    int32_t& get_ElementIndex();
    int32_t& get_SubIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
