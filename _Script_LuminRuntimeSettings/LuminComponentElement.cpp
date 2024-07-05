#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LuminComponentElement.hpp"
void* _Script_LuminRuntimeSettings::LuminComponentElement::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LuminRuntimeSettings::LuminComponentElement::get_VisibleName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LuminRuntimeSettings::LuminComponentElement::get_ExecutableName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_LuminRuntimeSettings::LuminComponentElement::get_ComponentType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_LuminRuntimeSettings::LuminComponentElement::get_ExtraComponentSubElements() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_LuminRuntimeSettings::LuminComponentElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LuminRuntimeSettings.LuminComponentElement");
    return result;
}
