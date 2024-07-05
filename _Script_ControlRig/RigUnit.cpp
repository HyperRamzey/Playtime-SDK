#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RigVM\RigVMStruct.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit");
    return result;
}
