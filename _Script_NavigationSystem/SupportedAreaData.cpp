#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SupportedAreaData.hpp"
void* _Script_NavigationSystem::SupportedAreaData::get_AreaClassName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_NavigationSystem::SupportedAreaData::get_AreaID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_NavigationSystem::SupportedAreaData::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::SupportedAreaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.SupportedAreaData");
    return result;
}
