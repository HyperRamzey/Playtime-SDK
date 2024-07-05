#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionShadingModel.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionShadingModel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionShadingModel");
    return result;
}
void* _Script_Engine::MaterialExpressionShadingModel::get_ShadingModel() {
    return (void*)((uintptr_t)this + 0x40);
}
