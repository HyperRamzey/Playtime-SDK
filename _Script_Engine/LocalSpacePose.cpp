#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalSpacePose.hpp"
void* _Script_Engine::LocalSpacePose::get_Transforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LocalSpacePose::get_Names() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::LocalSpacePose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LocalSpacePose");
    return result;
}
