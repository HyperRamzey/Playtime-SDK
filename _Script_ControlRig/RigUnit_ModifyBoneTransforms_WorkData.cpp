#include "..\FUObjectArray.hpp"
#include "RigUnit_ModifyBoneTransforms_WorkData.hpp"
#include "RigUnit_ModifyTransforms_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ModifyBoneTransforms_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData");
    return result;
}
