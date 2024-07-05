#include "..\FUObjectArray.hpp"
#include "ControlRigDrawContainer.hpp"
#include "ControlRigDrawInterface.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigDrawInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigDrawInterface");
    return result;
}
