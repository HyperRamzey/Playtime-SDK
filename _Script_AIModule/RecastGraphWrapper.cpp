#include "..\FUObjectArray.hpp"
#include "RecastGraphWrapper.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_NavigationSystem\RecastNavMesh.hpp"
_Script_NavigationSystem::RecastNavMesh*& _Script_AIModule::RecastGraphWrapper::get_RecastNavMeshActor() {
    return *(_Script_NavigationSystem::RecastNavMesh**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::RecastGraphWrapper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.RecastGraphWrapper");
    return result;
}
