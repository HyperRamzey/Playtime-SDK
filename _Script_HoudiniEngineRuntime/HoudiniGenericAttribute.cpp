#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniGenericAttribute.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_IntValues() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_AttributeName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_AttributeType() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_AttributeOwner() {
    return (void*)((uintptr_t)this + 0x11);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_AttributeTupleSize() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_AttributeCount() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_DoubleValues() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::get_StringValues() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniGenericAttribute::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniGenericAttribute");
    return result;
}
