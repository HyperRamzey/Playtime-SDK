#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "OutputActorOwner.hpp"
_Script_Engine::Actor*& _Script_HoudiniEngineRuntime::OutputActorOwner::get_OutputActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::OutputActorOwner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.OutputActorOwner");
    return result;
}
