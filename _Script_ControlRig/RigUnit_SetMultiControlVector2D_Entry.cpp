#include "..\FUObjectArray.hpp"
#include "RigUnit_SetMultiControlVector2D_Entry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetMultiControlVector2D_Entry::get_Control() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetMultiControlVector2D_Entry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry");
    return result;
}
void* _Script_ControlRig::RigUnit_SetMultiControlVector2D_Entry::get_Vector() {
    return (void*)((uintptr_t)this + 0x8);
}
