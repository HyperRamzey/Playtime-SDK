#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LightmassPrimitiveSettingsObject.hpp"
void* _Script_Engine::LightmassPrimitiveSettingsObject::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassPrimitiveSettingsObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightmassPrimitiveSettingsObject");
    return result;
}
