#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BranchingPointNotifyPayload.hpp"
_Script_CoreUObject::Class* _Script_Engine::BranchingPointNotifyPayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BranchingPointNotifyPayload");
    return result;
}