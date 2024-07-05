#include "..\FUObjectArray.hpp"
#include "ControlRigValidationPass.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigValidationPass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigValidationPass");
    return result;
}
