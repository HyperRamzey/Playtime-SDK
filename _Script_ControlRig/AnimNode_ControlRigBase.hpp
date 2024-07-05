#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_CustomProperty.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct AnimNode_ControlRigBase : public _Script_Engine::AnimNode_CustomProperty {
    private: char pad_58[0x118]; public:
    void* get_Source();
    void* get_ControlRigBoneMapping();
    void* get_ControlRigCurveMapping();
    void* get_InputToCurveMappingUIDs();
    void* get_NodeMappingContainer();
    void* get_InputSettings();
    void* get_OutputSettings();
    bool get_bExecute();
    void set_bExecute(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
