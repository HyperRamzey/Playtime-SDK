#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterToggle.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterToggle::get_Values() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterToggle::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterToggle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterToggle");
    return result;
}
