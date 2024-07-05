#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "RigVM.hpp"
void* _Script_RigVM::RigVM::get_WorkMemoryStorage() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RigVM::RigVM::get_LiteralMemoryStorage() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RigVM::RigVM::get_ParametersNameMap() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_RigVM::RigVM::SetParameterValueInt(void*& InParameterName, int32_t InValue, int32_t InArrayIndex) {
    return;
}
void* _Script_RigVM::RigVM::get_ByteCodeStorage() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_RigVM::RigVM::get_Parameters() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Script_RigVM::RigVM::SetParameterValueName(void*& InParameterName, void*& InValue, int32_t InArrayIndex) {
    return;
}
void* _Script_RigVM::RigVM::get_Context() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_RigVM::RigVM::get_Instructions() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_RigVM::RigVM::get_FunctionNamesStorage() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_RigVM::RigVM*& _Script_RigVM::RigVM::get_DeferredVMToCopy() {
    return *(_Script_RigVM::RigVM**)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Script_RigVM::RigVM::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RigVM.RigVM");
    return result;
}
void _Script_RigVM::RigVM::SetParameterValueVector2D(void*& InParameterName, _Script_CoreUObject::Vector2D& InValue, int32_t InArrayIndex) {
    return;
}
void _Script_RigVM::RigVM::SetParameterValueVector(void*& InParameterName, _Script_CoreUObject::Vector& InValue, int32_t InArrayIndex) {
    return;
}
void _Script_RigVM::RigVM::SetParameterValueTransform(void*& InParameterName, _Script_CoreUObject::Transform& InValue, int32_t InArrayIndex) {
    return;
}
void _Script_RigVM::RigVM::SetParameterValueString(void*& InParameterName, void* InValue, int32_t InArrayIndex) {
    return;
}
void _Script_RigVM::RigVM::SetParameterValueQuat(void*& InParameterName, _Script_CoreUObject::Quat& InValue, int32_t InArrayIndex) {
    return;
}
void _Script_RigVM::RigVM::SetParameterValueFloat(void*& InParameterName, float InValue, int32_t InArrayIndex) {
    return;
}
void _Script_RigVM::RigVM::SetParameterValueBool(void*& InParameterName, bool InValue, int32_t InArrayIndex) {
    return;
}
void* _Script_RigVM::RigVM::GetRigVMFunctionName(int32_t InFunctionIndex) {
    return;
}
_Script_CoreUObject::Vector2D _Script_RigVM::RigVM::GetParameterValueVector2D(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
_Script_CoreUObject::Vector _Script_RigVM::RigVM::GetParameterValueVector(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
_Script_CoreUObject::Transform _Script_RigVM::RigVM::GetParameterValueTransform(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
void* _Script_RigVM::RigVM::GetParameterValueString(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
_Script_CoreUObject::Quat _Script_RigVM::RigVM::GetParameterValueQuat(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
void* _Script_RigVM::RigVM::GetParameterValueName(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
int32_t _Script_RigVM::RigVM::GetParameterValueInt(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
float _Script_RigVM::RigVM::GetParameterValueFloat(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
bool _Script_RigVM::RigVM::GetParameterValueBool(void*& InParameterName, int32_t InArrayIndex) {
    return;
}
int32_t _Script_RigVM::RigVM::GetParameterArraySize(void*& InParameterName) {
    return;
}
bool _Script_RigVM::RigVM::Execute(void*& InEntryName) {
    return;
}
int32_t _Script_RigVM::RigVM::AddRigVMFunction(_Script_CoreUObject::ScriptStruct* InRigVMStruct, void*& InMethodName) {
    return;
}
