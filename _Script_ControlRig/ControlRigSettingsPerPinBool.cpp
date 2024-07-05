#include "..\FUObjectArray.hpp"
#include "ControlRigSettingsPerPinBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ControlRigSettingsPerPinBool::get_Values() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSettingsPerPinBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigSettingsPerPinBool");
    return result;
}
