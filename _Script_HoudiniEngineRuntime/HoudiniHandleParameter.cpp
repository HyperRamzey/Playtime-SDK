#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniHandleParameter.hpp"
#include "HoudiniParameter.hpp"
_Script_HoudiniEngineRuntime::HoudiniParameter*& _Script_HoudiniEngineRuntime::HoudiniHandleParameter::get_AssetParameter() {
    return *(_Script_HoudiniEngineRuntime::HoudiniParameter**)((uintptr_t)this + 0x28);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniHandleParameter::get_TupleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniHandleParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniHandleParameter");
    return result;
}
