#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterFile.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterFile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterFile");
    return result;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterFile::get_Values() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFile::get_bIsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterFile::get_Filters() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterFile::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFile::set_bIsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
