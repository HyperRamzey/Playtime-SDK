#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct ScriptStruct;
}
namespace _Script_RigVM {
#pragma pack(push, 1)
struct RigVM : public _Script_CoreUObject::Object {
    private: char pad_28[0x2d0]; public:
    void* get_WorkMemoryStorage();
    void* get_LiteralMemoryStorage();
    void* get_ByteCodeStorage();
    void* get_Instructions();
    void* get_Context();
    void* get_FunctionNamesStorage();
    void* get_Parameters();
    void* get_ParametersNameMap();
    _Script_RigVM::RigVM*& get_DeferredVMToCopy();
    static _Script_CoreUObject::Class* static_class();
    void SetParameterValueVector2D(void*& InParameterName, _Script_CoreUObject::Vector2D& InValue, int32_t InArrayIndex);
    void SetParameterValueVector(void*& InParameterName, _Script_CoreUObject::Vector& InValue, int32_t InArrayIndex);
    void SetParameterValueTransform(void*& InParameterName, _Script_CoreUObject::Transform& InValue, int32_t InArrayIndex);
    void SetParameterValueString(void*& InParameterName, void* InValue, int32_t InArrayIndex);
    void SetParameterValueQuat(void*& InParameterName, _Script_CoreUObject::Quat& InValue, int32_t InArrayIndex);
    void SetParameterValueName(void*& InParameterName, void*& InValue, int32_t InArrayIndex);
    void SetParameterValueInt(void*& InParameterName, int32_t InValue, int32_t InArrayIndex);
    void SetParameterValueFloat(void*& InParameterName, float InValue, int32_t InArrayIndex);
    void SetParameterValueBool(void*& InParameterName, bool InValue, int32_t InArrayIndex);
    void* GetRigVMFunctionName(int32_t InFunctionIndex);
    _Script_CoreUObject::Vector2D GetParameterValueVector2D(void*& InParameterName, int32_t InArrayIndex);
    _Script_CoreUObject::Vector GetParameterValueVector(void*& InParameterName, int32_t InArrayIndex);
    _Script_CoreUObject::Transform GetParameterValueTransform(void*& InParameterName, int32_t InArrayIndex);
    void* GetParameterValueString(void*& InParameterName, int32_t InArrayIndex);
    _Script_CoreUObject::Quat GetParameterValueQuat(void*& InParameterName, int32_t InArrayIndex);
    void* GetParameterValueName(void*& InParameterName, int32_t InArrayIndex);
    int32_t GetParameterValueInt(void*& InParameterName, int32_t InArrayIndex);
    float GetParameterValueFloat(void*& InParameterName, int32_t InArrayIndex);
    bool GetParameterValueBool(void*& InParameterName, int32_t InArrayIndex);
    int32_t GetParameterArraySize(void*& InParameterName);
    bool Execute(void*& InEntryName);
    int32_t AddRigVMFunction(_Script_CoreUObject::ScriptStruct* InRigVMStruct, void*& InMethodName);
}; // Size: 0x2f8
#pragma pack(pop)
}
