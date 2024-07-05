#include "..\FUObjectArray.hpp"
#include "RigElementKeyCollection.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigElementKeyCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigElementKeyCollection");
    return result;
}
