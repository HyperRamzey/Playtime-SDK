#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_FieldSystemEngine {
struct FieldSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
struct FieldSystemMetaData;
}
namespace _Script_FieldSystemEngine {
struct FieldNodeBase;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct FieldSystemComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_450[0xd0]; public:
    _Script_FieldSystemEngine::FieldSystem*& get_FieldSystem();
    bool get_bIsWorldField();
    void set_bIsWorldField(bool value);
    bool get_bIsChaosField();
    void set_bIsChaosField(bool value);
    void* get_SupportedSolvers();
    void* get_ConstructionCommands();
    void* get_BufferCommands();
    static _Script_CoreUObject::Class* static_class();
    void ResetFieldSystem();
    void RemovePersistentFields();
    void ApplyUniformVectorFalloffForce(bool Enabled, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Direction, float Radius, float Magnitude);
    void ApplyStrainField(bool Enabled, _Script_CoreUObject::Vector Position, float Radius, float Magnitude, int32_t Iterations);
    void ApplyStayDynamicField(bool Enabled, _Script_CoreUObject::Vector Position, float Radius);
    void ApplyRadialVectorFalloffForce(bool Enabled, _Script_CoreUObject::Vector Position, float Radius, float Magnitude);
    void ApplyRadialForce(bool Enabled, _Script_CoreUObject::Vector Position, float Magnitude);
    void ApplyPhysicsField(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field);
    void ApplyLinearForce(bool Enabled, _Script_CoreUObject::Vector Direction, float Magnitude);
    void AddPersistentField(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field);
    void AddFieldCommand(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field);
}; // Size: 0x520
#pragma pack(pop)
}
