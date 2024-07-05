#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ConstraintProfileProperties {
    private: char pad_0[0x114]; public:
    float& get_ProjectionLinearTolerance();
    float& get_ProjectionAngularTolerance();
    float& get_ProjectionLinearAlpha();
    float& get_ProjectionAngularAlpha();
    float& get_LinearBreakThreshold();
    float& get_LinearPlasticityThreshold();
    float& get_AngularBreakThreshold();
    float& get_AngularPlasticityThreshold();
    void* get_LinearLimit();
    void* get_ConeLimit();
    void* get_TwistLimit();
    void* get_LinearDrive();
    void* get_AngularDrive();
    bool get_bDisableCollision();
    void set_bDisableCollision(bool value);
    bool get_bParentDominates();
    void set_bParentDominates(bool value);
    bool get_bEnableProjection();
    void set_bEnableProjection(bool value);
    bool get_bEnableSoftProjection();
    void set_bEnableSoftProjection(bool value);
    bool get_bAngularBreakable();
    void set_bAngularBreakable(bool value);
    bool get_bAngularPlasticity();
    void set_bAngularPlasticity(bool value);
    bool get_bLinearBreakable();
    void set_bLinearBreakable(bool value);
    bool get_bLinearPlasticity();
    void set_bLinearPlasticity(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x114
#pragma pack(pop)
}
