#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMBaseOp.hpp"
#include "RigVMUnaryOp.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMUnaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMUnaryOp");
    return result;
}
