#include "..\FUObjectArray.hpp"
#include "RigUnit_Control.hpp"
#include "RigUnit_Control_StaticMesh.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_Control_StaticMesh::get_MeshTransform() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Control_StaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Control_StaticMesh");
    return result;
}
