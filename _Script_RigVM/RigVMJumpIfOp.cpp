#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMJumpIfOp.hpp"
#include "RigVMUnaryOp.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMJumpIfOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMJumpIfOp");
    return result;
}
