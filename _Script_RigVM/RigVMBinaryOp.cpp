#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMBaseOp.hpp"
#include "RigVMBinaryOp.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMBinaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMBinaryOp");
    return result;
}