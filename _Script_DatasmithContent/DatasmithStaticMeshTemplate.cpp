#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithStaticMeshTemplate.hpp"
void* _Script_DatasmithContent::DatasmithStaticMeshTemplate::get_SectionInfoMap() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_DatasmithContent::DatasmithStaticMeshTemplate::get_LightMapCoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
int32_t& _Script_DatasmithContent::DatasmithStaticMeshTemplate::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
void* _Script_DatasmithContent::DatasmithStaticMeshTemplate::get_BuildSettings() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithStaticMeshTemplate");
    return result;
}
void* _Script_DatasmithContent::DatasmithStaticMeshTemplate::get_StaticMaterials() {
    return (void*)((uintptr_t)this + 0x98);
}
