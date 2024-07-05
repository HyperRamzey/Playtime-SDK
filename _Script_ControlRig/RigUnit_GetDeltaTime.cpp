#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_GetDeltaTime.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_GetDeltaTime::get_Result() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetDeltaTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetDeltaTime");
    return result;
}
