#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionNamedRerouteBase.hpp"
#include "MaterialExpressionNamedRerouteDeclaration.hpp"
void* _Script_Engine::MaterialExpressionNamedRerouteDeclaration::get_VariableGuid() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::MaterialExpressionNamedRerouteDeclaration::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionNamedRerouteDeclaration::get_Name() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionNamedRerouteDeclaration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionNamedRerouteDeclaration");
    return result;
}
