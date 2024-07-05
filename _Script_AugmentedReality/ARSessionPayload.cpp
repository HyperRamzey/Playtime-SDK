#include "..\FUObjectArray.hpp"
#include "ARSessionPayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
_Script_Engine::MaterialInterface*& _Script_AugmentedReality::ARSessionPayload::get_DefaultWireframeMeshMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x10);
}
int32_t& _Script_AugmentedReality::ARSessionPayload::get_ConfigFlags() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialInterface*& _Script_AugmentedReality::ARSessionPayload::get_DefaultMeshMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSessionPayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARSessionPayload");
    return result;
}
