#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavAgentProperties.hpp"
#include "NavDataConfig.hpp"
void* _Script_Engine::NavDataConfig::get_NavigationDataClass() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::NavDataConfig::get_Name() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::NavDataConfig::get_Color() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::NavDataConfig::get_DefaultQueryExtent() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::NavDataConfig::get_NavDataClass() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::NavDataConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavDataConfig");
    return result;
}
