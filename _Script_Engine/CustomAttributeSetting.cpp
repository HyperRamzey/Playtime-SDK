#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomAttributeSetting.hpp"
void* _Script_Engine::CustomAttributeSetting::get_Meaning() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::CustomAttributeSetting::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CustomAttributeSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomAttributeSetting");
    return result;
}
