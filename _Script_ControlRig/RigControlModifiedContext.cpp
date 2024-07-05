#include "..\FUObjectArray.hpp"
#include "RigControlModifiedContext.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigControlModifiedContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigControlModifiedContext");
    return result;
}
