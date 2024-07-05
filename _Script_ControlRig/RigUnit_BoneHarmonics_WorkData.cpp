#include "..\FUObjectArray.hpp"
#include "RigUnit_BoneHarmonics_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_BoneHarmonics_WorkData::get_CachedItems() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics_WorkData::get_WaveTime() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BoneHarmonics_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData");
    return result;
}
