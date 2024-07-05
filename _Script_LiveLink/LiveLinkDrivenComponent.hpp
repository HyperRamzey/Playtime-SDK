#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkDrivenComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x18]; public:
    void* get_SubjectName();
    void* get_ActorTransformBone();
    bool get_bModifyActorTransform();
    void set_bModifyActorTransform(bool value);
    bool get_bSetRelativeLocation();
    void set_bSetRelativeLocation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
