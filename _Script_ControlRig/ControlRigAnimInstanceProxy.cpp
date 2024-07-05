#include "..\FUObjectArray.hpp"
#include "ControlRigAnimInstanceProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigAnimInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ControlRigAnimInstanceProxy");
    return result;
}
