#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_RigVM {
struct RigVM;
}
namespace _Script_AnimationCore {
struct AnimationDataSourceRegistry;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct ControlRig : public _Script_CoreUObject::Object {
    private: char pad_28[0x628]; public:
    void* get_ExecutionType();
    _Script_RigVM::RigVM*& get_VM();
    void* get_Hierarchy();
    void* get_GizmoLibrary();
    void* get_InputProperties();
    void* get_OutputProperties();
    void* get_DrawContainer();
    _Script_AnimationCore::AnimationDataSourceRegistry*& get_DataSourceRegistry();
    void* get_EventQueue();
    void* get_Influences();
    _Script_ControlRig::ControlRig*& get_InteractionRig();
    void* get_InteractionRigClass();
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
    void SetInteractionRigClass(void* InInteractionRigClass);
    void SetInteractionRig(_Script_ControlRig::ControlRig* InInteractionRig);
    void* GetInteractionRigClass();
    _Script_ControlRig::ControlRig* GetInteractionRig();
}; // Size: 0x650
#pragma pack(pop)
}
