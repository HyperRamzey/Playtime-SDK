#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionBlackBody.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionBlackBody::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionBlackBody");
    return result;
}
void* _Script_Engine::MaterialExpressionBlackBody::get_Temp() {
    return (void*)((uintptr_t)this + 0x40);
}
