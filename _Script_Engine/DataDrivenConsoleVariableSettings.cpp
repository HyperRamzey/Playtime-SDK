#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "DataDrivenConsoleVariableSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::DataDrivenConsoleVariableSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DataDrivenConsoleVariableSettings");
    return result;
}
void* _Script_Engine::DataDrivenConsoleVariableSettings::get_CVarsArray() {
    return (void*)((uintptr_t)this + 0x50);
}
