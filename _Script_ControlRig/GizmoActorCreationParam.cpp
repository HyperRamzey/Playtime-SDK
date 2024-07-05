#include "..\FUObjectArray.hpp"
#include "GizmoActorCreationParam.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::GizmoActorCreationParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.GizmoActorCreationParam");
    return result;
}
