#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponentInstanceData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ChildActorComponentInstanceData : public SceneComponentInstanceData {
    private: char pad_b8[0x30]; public:
    void* get_ChildActorClass();
    void* get_ChildActorName();
    void* get_AttachedActors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
