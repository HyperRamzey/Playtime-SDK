#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveGizmo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct PlanePositionGizmo : public InteractiveGizmo {
    private: char pad_38[0xc8]; public:
    void* get_AxisSource();
    void* get_ParameterSource();
    void* get_HitTarget();
    void* get_StateTarget();
    bool get_bEnableSignedAxis();
    void set_bEnableSignedAxis(bool value);
    bool get_bFlipX();
    void set_bFlipX(bool value);
    bool get_bFlipY();
    void set_bFlipY(bool value);
    bool get_bInInteraction();
    void set_bInInteraction(bool value);
    void* get_InteractionOrigin();
    void* get_InteractionNormal();
    void* get_InteractionAxisX();
    void* get_InteractionAxisY();
    void* get_InteractionStartPoint();
    void* get_InteractionCurPoint();
    void* get_InteractionStartParameter();
    void* get_InteractionCurParameter();
    void* get_ParameterSigns();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
