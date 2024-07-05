#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMBaseOp.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMBaseOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMBaseOp");
    return result;
}
