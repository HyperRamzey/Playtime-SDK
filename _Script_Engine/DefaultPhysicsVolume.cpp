#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DefaultPhysicsVolume.hpp"
#include "PhysicsVolume.hpp"
_Script_CoreUObject::Class* _Script_Engine::DefaultPhysicsVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DefaultPhysicsVolume");
    return result;
}