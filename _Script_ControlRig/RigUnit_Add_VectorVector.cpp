#include "..\FUObjectArray.hpp"
#include "RigUnit_Add_VectorVector.hpp"
#include "RigUnit_BinaryVectorOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Add_VectorVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Add_VectorVector");
    return result;
}
