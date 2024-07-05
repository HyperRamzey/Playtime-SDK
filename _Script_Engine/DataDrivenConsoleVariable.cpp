#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataDrivenConsoleVariable.hpp"
void* _Script_Engine::DataDrivenConsoleVariable::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::DataDrivenConsoleVariable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DataDrivenConsoleVariable");
    return result;
}
void* _Script_Engine::DataDrivenConsoleVariable::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::DataDrivenConsoleVariable::get_DefaultValueInt() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::DataDrivenConsoleVariable::get_Tooltip() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::DataDrivenConsoleVariable::get_DefaultValueFloat() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::DataDrivenConsoleVariable::get_DefaultValueBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::DataDrivenConsoleVariable::set_DefaultValueBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
