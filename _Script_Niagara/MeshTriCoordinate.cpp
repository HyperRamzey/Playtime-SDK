#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshTriCoordinate.hpp"
int32_t& _Script_Niagara::MeshTriCoordinate::get_Tri() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::MeshTriCoordinate::get_BaryCoord() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::MeshTriCoordinate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MeshTriCoordinate");
    return result;
}
