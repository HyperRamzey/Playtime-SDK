#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TickableWorldSubsystem.hpp"
#include "WorldSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::TickableWorldSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TickableWorldSubsystem");
    return result;
}
