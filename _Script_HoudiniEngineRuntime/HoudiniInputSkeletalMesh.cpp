#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputObject.hpp"
#include "HoudiniInputSkeletalMesh.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputSkeletalMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMesh");
    return result;
}