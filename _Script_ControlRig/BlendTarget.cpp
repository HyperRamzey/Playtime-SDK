#include "..\FUObjectArray.hpp"
#include "BlendTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::BlendTarget::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::BlendTarget::get_Weight() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::BlendTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.BlendTarget");
    return result;
}
