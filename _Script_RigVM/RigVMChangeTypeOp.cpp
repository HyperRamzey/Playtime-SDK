#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMChangeTypeOp.hpp"
#include "RigVMUnaryOp.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMChangeTypeOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMChangeTypeOp");
    return result;
}
