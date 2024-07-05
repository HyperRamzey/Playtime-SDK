#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputObject.hpp"
#include "HoudiniInputStaticMesh.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputStaticMesh::get_BlueprintStaticMeshes() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputStaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputStaticMesh");
    return result;
}
