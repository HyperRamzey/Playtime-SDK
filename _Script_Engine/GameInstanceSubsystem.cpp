#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstanceSubsystem.hpp"
#include "Subsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::GameInstanceSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameInstanceSubsystem");
    return result;
}