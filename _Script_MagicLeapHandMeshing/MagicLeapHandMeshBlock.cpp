#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapHandMeshBlock.hpp"
int32_t& _Script_MagicLeapHandMeshing::MagicLeapHandMeshBlock::get_IndexCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeapHandMeshing::MagicLeapHandMeshBlock::get_Index() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_MagicLeapHandMeshing::MagicLeapHandMeshBlock::get_VertexCount() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_MagicLeapHandMeshing::MagicLeapHandMeshBlock::get_Vertex() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MagicLeapHandMeshing::MagicLeapHandMeshBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock");
    return result;
}
