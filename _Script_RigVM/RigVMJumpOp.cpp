#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMBaseOp.hpp"
#include "RigVMJumpOp.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMJumpOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMJumpOp");
    return result;
}
