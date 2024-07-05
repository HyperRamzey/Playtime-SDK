#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_ControlRig {
struct ControlRig;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRigControlActor : public _Script_Engine::Actor {
    private: char pad_220[0x98]; public:
    _Script_Engine::Actor*& get_ActorToTrack();
    void* get_ControlRigClass();
    bool get_bRefreshOnTick();
    void set_bRefreshOnTick(bool value);
    bool get_bIsSelectable();
    void set_bIsSelectable(bool value);
    _Script_Engine::MaterialInterface*& get_MaterialOverride();
    void* get_ColorParameter();
    bool get_bCastShadows();
    void set_bCastShadows(bool value);
    _Script_Engine::SceneComponent*& get_ActorRootComponent();
    _Script_ControlRig::ControlRig*& get_ControlRig();
    void* get_ControlNames();
    void* get_GizmoTransforms();
    void* get_Components();
    void* get_Materials();
    void* get_ColorParameterName();
    static _Script_CoreUObject::Class* static_class();
    void Refresh();
    void Clear();
}; // Size: 0x2b8
#pragma pack(pop)
}
