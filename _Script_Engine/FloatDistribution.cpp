#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FloatDistribution.hpp"
_Script_CoreUObject::Class* _Script_Engine::FloatDistribution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FloatDistribution");
    return result;
}
void* _Script_Engine::FloatDistribution::get_Table() {
    return (void*)((uintptr_t)this + 0x0);
}