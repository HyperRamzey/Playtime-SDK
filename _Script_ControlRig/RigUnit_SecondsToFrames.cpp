#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_SecondsToFrames.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SecondsToFrames::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SecondsToFrames");
    return result;
}
float& _Script_ControlRig::RigUnit_SecondsToFrames::get_Seconds() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_SecondsToFrames::get_Frames() {
    return *(float*)((uintptr_t)this + 0xc);
}
