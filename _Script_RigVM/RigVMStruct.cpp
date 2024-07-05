#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigVMStruct.hpp"
_Script_CoreUObject::Class* _Script_RigVM::RigVMStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RigVM.RigVMStruct");
    return result;
}
