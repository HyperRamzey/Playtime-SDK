#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ItemBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ItemBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ItemBase");
    return result;
}
