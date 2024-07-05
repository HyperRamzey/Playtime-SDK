#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "NiagaraMeshRendererMeshProperties.hpp"
_Script_Engine::StaticMesh*& _Script_Niagara::NiagaraMeshRendererMeshProperties::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMeshRendererMeshProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraMeshRendererMeshProperties");
    return result;
}
void* _Script_Niagara::NiagaraMeshRendererMeshProperties::get_Scale() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraMeshRendererMeshProperties::get_PivotOffsetSpace() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::NiagaraMeshRendererMeshProperties::get_PivotOffset() {
    return (void*)((uintptr_t)this + 0x14);
}
