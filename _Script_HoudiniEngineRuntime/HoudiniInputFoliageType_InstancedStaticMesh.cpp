#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputFoliageType_InstancedStaticMesh.hpp"
#include "HoudiniInputStaticMesh.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputFoliageType_InstancedStaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh");
    return result;
}
