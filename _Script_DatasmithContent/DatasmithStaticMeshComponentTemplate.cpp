#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithStaticMeshComponentTemplate.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
void* _Script_DatasmithContent::DatasmithStaticMeshComponentTemplate::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::StaticMesh*& _Script_DatasmithContent::DatasmithStaticMeshComponentTemplate::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate");
    return result;
}
