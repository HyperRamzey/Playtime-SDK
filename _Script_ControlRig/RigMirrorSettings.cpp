#include "..\FUObjectArray.hpp"
#include "RigMirrorSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigMirrorSettings::get_MirrorAxis() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigMirrorSettings::get_AxisToFlip() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_ControlRig::RigMirrorSettings::get_OldName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigMirrorSettings::get_NewName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigMirrorSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigMirrorSettings");
    return result;
}
