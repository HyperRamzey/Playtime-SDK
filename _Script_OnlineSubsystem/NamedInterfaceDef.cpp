#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedInterfaceDef.hpp"
void* _Script_OnlineSubsystem::NamedInterfaceDef::get_InterfaceName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystem::NamedInterfaceDef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystem.NamedInterfaceDef");
    return result;
}
void* _Script_OnlineSubsystem::NamedInterfaceDef::get_InterfaceClassName() {
    return (void*)((uintptr_t)this + 0x8);
}
