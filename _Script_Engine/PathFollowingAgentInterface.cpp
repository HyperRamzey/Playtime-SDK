#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "PathFollowingAgentInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::PathFollowingAgentInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PathFollowingAgentInterface");
    return result;
}
