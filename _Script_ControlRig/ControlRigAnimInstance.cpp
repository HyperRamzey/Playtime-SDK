#include "..\FUObjectArray.hpp"
#include "ControlRigAnimInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigAnimInstance");
    return result;
}
