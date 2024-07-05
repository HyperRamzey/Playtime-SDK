#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniCurveOutputProperties.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::get_CurveType() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::get_CurveOutputType() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::get_NumPoints() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniCurveOutputProperties");
    return result;
}
void _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::set_bClosed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::get_bClosed() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniCurveOutputProperties::get_CurveMethod() {
    return (void*)((uintptr_t)this + 0xa);
}
