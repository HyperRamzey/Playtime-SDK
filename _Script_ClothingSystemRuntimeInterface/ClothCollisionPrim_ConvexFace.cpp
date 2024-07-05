#include "..\FUObjectArray.hpp"
#include "ClothCollisionPrim_ConvexFace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_ConvexFace::get_Indices() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_ConvexFace::get_Plane() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_ConvexFace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace");
    return result;
}
