#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionNamedRerouteBase.hpp"
#include "MaterialExpressionNamedRerouteDeclaration.hpp"
#include "MaterialExpressionNamedRerouteUsage.hpp"
_Script_Engine::MaterialExpressionNamedRerouteDeclaration*& _Script_Engine::MaterialExpressionNamedRerouteUsage::get_Declaration() {
    return *(_Script_Engine::MaterialExpressionNamedRerouteDeclaration**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionNamedRerouteUsage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionNamedRerouteUsage");
    return result;
}
void* _Script_Engine::MaterialExpressionNamedRerouteUsage::get_DeclarationGuid() {
    return (void*)((uintptr_t)this + 0x48);
}
