#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniOutputObject.hpp"
_Script_CoreUObject::Object*& _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_OutputObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_bIsImplicit() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutputObject::set_bIsImplicit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Object*& _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_OutputComponent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_CachedAttributes() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Object*& _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_ProxyObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Object*& _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_ProxyComponent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x18);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_bProxyIsCurrent() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutputObject::set_bProxyIsCurrent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_bIsGeometryCollectionPiece() {
    return (*(uint8_t*)((uintptr_t)this + 0x22 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutputObject::set_bIsGeometryCollectionPiece(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22 + 0);
    *(uint8_t*)((uintptr_t)this + 0x22 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_GeometryCollectionPieceName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_BakeName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_CurveOutputProperty() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutputObject::get_CachedTokens() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniOutputObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniOutputObject");
    return result;
}
