#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct SequenceCameraShakeCameraStandIn : public _Script_CoreUObject::Object {
    private: char pad_28[0x648]; public:
    float& get_FieldOfView();
    bool get_bConstrainAspectRatio();
    void set_bConstrainAspectRatio(bool value);
    float& get_AspectRatio();
    void* get_PostProcessSettings();
    float& get_PostProcessBlendWeight();
    void* get_Filmback();
    void* get_LensSettings();
    void* get_FocusSettings();
    float& get_CurrentFocalLength();
    float& get_CurrentAperture();
    float& get_CurrentFocusDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x670
#pragma pack(pop)
}
