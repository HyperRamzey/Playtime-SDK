#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LuminComponentSubElement.hpp"
void* _Script_LuminRuntimeSettings::LuminComponentSubElement::get_ElementType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LuminRuntimeSettings::LuminComponentSubElement::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_LuminRuntimeSettings::LuminComponentSubElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LuminRuntimeSettings.LuminComponentSubElement");
    return result;
}
