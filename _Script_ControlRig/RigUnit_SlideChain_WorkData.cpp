#include "..\FUObjectArray.hpp"
#include "RigUnit_SlideChain_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_SlideChain_WorkData::get_ChainLength() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_SlideChain_WorkData::get_ItemSegments() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_SlideChain_WorkData::get_CachedItems() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_SlideChain_WorkData::get_BlendedTransforms() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_SlideChain_WorkData::get_Transforms() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SlideChain_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SlideChain_WorkData");
    return result;
}
