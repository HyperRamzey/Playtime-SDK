#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineSubsystem.hpp"
#include "HLODEngineSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::HLODEngineSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HLODEngineSubsystem");
    return result;
}
