#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterOperatorPath.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterOperatorPath::get_HoudiniInput() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterOperatorPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterOperatorPath");
    return result;
}
