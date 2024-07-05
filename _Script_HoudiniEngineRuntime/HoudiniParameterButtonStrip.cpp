#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterButtonStrip.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterButtonStrip::get_Labels() {
    return (void*)((uintptr_t)this + 0x110);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterButtonStrip::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterButtonStrip::get_Values() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterButtonStrip::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterButtonStrip");
    return result;
}
