#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapHandMesh.hpp"
int32_t& _Script_MagicLeapHandMeshing::MagicLeapHandMesh::get_Version() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MagicLeapHandMeshing::MagicLeapHandMesh::get_DataCount() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_MagicLeapHandMeshing::MagicLeapHandMesh::get_Data() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MagicLeapHandMeshing::MagicLeapHandMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapHandMeshing.MagicLeapHandMesh");
    return result;
}
