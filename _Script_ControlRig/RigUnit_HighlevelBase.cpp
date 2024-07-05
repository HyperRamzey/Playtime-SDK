#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_HighlevelBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_HighlevelBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_HighlevelBase");
    return result;
}
